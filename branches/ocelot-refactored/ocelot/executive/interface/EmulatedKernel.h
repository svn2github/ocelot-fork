/*!
	\file EmulatedKernel.h
	\author Andrew Kerr <arkerr@gatech.edu>
	\date Jan 19, 2009
	\brief implements a kernel emulated on the host CPU
*/

#ifndef EXECUTIVE_EMULATEDKERNEL_H_INCLUDED
#define EXECUTIVE_EMULATEDKERNEL_H_INCLUDED

#include <list>
#include <map>

#include <ocelot/ir/interface/PTXKernel.h>
#include <ocelot/ir/interface/ExecutableKernel.h>
#include <ocelot/ir/interface/Texture.h>

#include <ocelot/executive/interface/CTAContext.h>
#include <ocelot/executive/interface/CooperativeThreadArray.h>
#include <hydrazine/interface/Stringable.h>

namespace trace {
	class TraceGenerator;
}

namespace executive {
		
	class EmulatedKernel: public ir::ExecutableKernel {
	public:
		typedef std::vector< const ir::Texture* > TextureVector;

	private:
		static void _computeOffset(const ir::PTXStatement& it, 
			unsigned int& offset, unsigned int& totalOffset);

	public:
		EmulatedKernel(ir::Kernel *kernel, const Executive* c);
		EmulatedKernel();
		virtual ~EmulatedKernel();
	
		/*!	Launch a kernel on a 2D grid */
		void launchGrid(int width, int height);
	
		/*!	Sets the shape of a kernel */
		void setKernelShape(int x, int y, int z);

		/*!	Sets device used to execute the kernel */
		void setDevice(const Device* device, unsigned int limit);
		
		/*!
			Sets shared memory size used by the emulated kernel
		*/
		void setSharedMemorySize(size_t bytes);

	public:
		/*!	Notifies all attached TraceGenerators of an event */
		void traceEvent( const trace::TraceEvent & event) const;

		/*!	adds a trace generator to the EmulatedKernel */
		void addTraceGenerator(trace::TraceGenerator *generator);

		/*!	removes a trace generator from an EmulatedKernel */
		void removeTraceGenerator(trace::TraceGenerator *generator);

		/*!	Gets the configured dimensions of a block */
		ir::Dim3 getBlockDim() const {
			return blockDim;
		}
	
	protected:
		/*! Cleans up the EmulatedKernel instance*/
		void freeAll();

		/*!	From Kernel, analyze application and construct data structures 
				necessary for emulation */
		void initialize(ir::PTXKernel::PTXInstructionVector& instructions);

		/*!	Configures the parameter block for the CUDA driver API */
		void configureParameters();
	
		/*!	On construction, allocates registers by computing live ranges */
		void registerAllocation();

		/*!	Produces a packed vector of instructions, updates each operand, 
			and changes labels to indices.
		*/
		void constructInstructionSequence(
			ir::PTXKernel::PTXInstructionVector& instructions);

		/*!	After emitting the instruction sequence, visit each memory move 
			operation and replace references to parameters with offsets into 
			parameter memory.
		*/
		void updateParamReferences();

		/*!	Allocate parameter memory*/	
		void initializeParameterMemory();

		/*!	Allocates arrays in shared memory and maps identifiers to 
			allocations. */
		void initializeSharedMemory();

		/*!	Allocates arrays in local memory and maps identifiers to 
			allocations. */
		void initializeLocalMemory();

		/*!	Maps identifiers to const memory allocations. */
		void initializeConstMemory();

		/*!	Maps identifiers to global memory allocations. */
		void initializeGlobalMemory();		

		/*!	Maps identifiers to global shared memory allocations. */
		void initializeGlobalSharedMemory();
		
		/*!	Scans the kernel and builds the set of textures using references 
				in tex instructions */
		void initializeTextureMemory();

	public:
		/*!	Dimension of grid in blocks */
		ir::Dim3 gridDim;

		/*!	Dimension of block in threads */
		ir::Dim3 blockDim;
	
		/*!	Number of threads in the block */
		int threadCount;

		/*! A map of register name to register number */
		ir::PTXKernel::RegisterMap registerMap;

		/*!	The number of registers allocated to each thread */
		int RegisterCount;

		/*!	Pointer to block of memory used to store parameter data */
		char *ParameterMemory;

		/*!	Number of bytes in parameter region */
		unsigned int ParameterMemorySize;

		/*!	Pointer to byte-addressable const memory */
		char *ConstMemory;

		/*!	Number of bytes in constant memory */
		unsigned int ConstMemorySize;

		/*!	Number of bytes in shared memory */
		unsigned int SharedMemorySize;
		
		/*!	Local memory size */
		unsigned int LocalMemorySize;
		
		/*!	Packed and allocated vector of instructions implementing kernel */
		ir::PTXKernel::PTXInstructionVector KernelInstructions;

		/*!	Packed vector of mapped textures */
		TextureVector textures;
	
		/*!	set of all trace generators listening to kernel */
		std::list< trace::TraceGenerator * > Traces;

	public:
		/*! \brief Check to see if a memory access is valid */
		bool checkMemoryAccess(const void* base, size_t size) const;
	
	public:
		/*!	Copies data from parameter objects into parameter memory */
		void updateParameterMemory();	

		/*! Copies data from global objects into const and global memory */
		void updateGlobals();	

	public:
		/*!	Print out every instruction	*/
		std::string toString() const;
		
		/*! \brief Get the file name that the kernel resides in */
		std::string fileName() const;
		
		/*! \brief Get the nearest location to an instruction at a given PC */
		std::string location( unsigned int PC ) const;
	};
	
}

#endif