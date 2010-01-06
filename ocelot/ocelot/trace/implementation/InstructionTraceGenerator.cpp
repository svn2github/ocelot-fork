/*!
	\file InstructionTraceGenerator.cpp
	\author Andrew Kerr <arkerr@gatech.edu>
	\date date Jan 5, 2010
	\brief captures static and dynamic instruction counts
*/

// C++ stdlib includes
#include <fstream>

// Ocelot includes
#include <ocelot/trace/interface/InstructionTraceGenerator.h>

// Hydrazine includes
#include <hydrazine/implementation/Exception.h>

// Boost includes
#include <boost/filesystem.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

//////////////////////////////////////////////////////////////////////////////////////////////////

trace::InstructionTraceGenerator::InstructionCounter::InstructionCounter():
	dynamic_count(0), static_count(0), active_threads(0) {
}

void trace::InstructionTraceGenerator::InstructionCounter::count(
	const ir::PTXInstruction &instr, size_t active) {

	++dynamic_count;
	active_threads += active;
}

//////////////////////////////////////////////////////////////////////////////////////////////////

/*!
	\brief gets the functional unit associated with a particular PTXInstruction
	\param instr PTXInstruction instance
	\return functional unit
*/
trace::InstructionTraceGenerator::FunctionalUnit trace::InstructionTraceGenerator::getFunctionalUnit(
	const ir::PTXInstruction &instr) {

	// switch warning: many fall-through cases follow - code blocks not listed in braces are suspect
	switch (instr.opcode) {

	// Arithmetic
	case ir::PTXInstruction::Abs:
	case ir::PTXInstruction::Add:
	case ir::PTXInstruction::AddC:
	case ir::PTXInstruction::Div:
	case ir::PTXInstruction::Mad24:
	case ir::PTXInstruction::Mad:
	case ir::PTXInstruction::Max:
	case ir::PTXInstruction::Min:
	case ir::PTXInstruction::Mov:
	case ir::PTXInstruction::Mul24:
	case ir::PTXInstruction::Mul:
	case ir::PTXInstruction::Neg:
	case ir::PTXInstruction::Rcp:
	case ir::PTXInstruction::Rem:
	case ir::PTXInstruction::Sad:
	case ir::PTXInstruction::Sub:
		{
			switch (instr.type) {
				case ir::PTXOperand::b8:
				case ir::PTXOperand::b16:
				case ir::PTXOperand::b32:
				case ir::PTXOperand::b64:
				case ir::PTXOperand::s8:
				case ir::PTXOperand::s16:
				case ir::PTXOperand::s32:
				case ir::PTXOperand::s64:
				case ir::PTXOperand::u8:
				case ir::PTXOperand::u16:
				case ir::PTXOperand::u32:
				case ir::PTXOperand::u64:
					{
						return Integer_arithmetic;
					}
				case ir::PTXOperand::f32:
					{
						return Float_single;
					}
				case ir::PTXOperand::f64:
					{
						return Float_double;
					}
				default:
					return FunctionalUnit_invalid;
			}
		}
		break;

	// Logical
	case ir::PTXInstruction::And:
	case ir::PTXInstruction::CNot:
	case ir::PTXInstruction::Not:
	case ir::PTXInstruction::Or:
	case ir::PTXInstruction::Shl:
	case ir::PTXInstruction::Shr:
	case ir::PTXInstruction::Xor:
		{
			switch (instr.type) {
				case ir::PTXOperand::b8:
				case ir::PTXOperand::b16:
				case ir::PTXOperand::b32:
				case ir::PTXOperand::b64:
				case ir::PTXOperand::s8:
				case ir::PTXOperand::s16:
				case ir::PTXOperand::s32:
				case ir::PTXOperand::s64:
				case ir::PTXOperand::u8:
				case ir::PTXOperand::u16:
				case ir::PTXOperand::u32:
				case ir::PTXOperand::u64:
					{
						return Integer_logical;
					}
				default:
					return FunctionalUnit_invalid;
			}
		}
		break;

	// Transcendental and other special
	case ir::PTXInstruction::Cos:
	case ir::PTXInstruction::Ex2:
	case ir::PTXInstruction::Lg2:
	case ir::PTXInstruction::Rsqrt:
	case ir::PTXInstruction::Sqrt:
	case ir::PTXInstruction::Sin:
		{
			switch (instr.type) {
				case ir::PTXOperand::f32:
				case ir::PTXOperand::f64:
					{
						return Special;
					}
				default:
					return FunctionalUnit_invalid;
			}
		}
		break;

	// Memory
	case ir::PTXInstruction::Atom:
	case ir::PTXInstruction::Ld:
	case ir::PTXInstruction::Membar:
	case ir::PTXInstruction::Tex:
	case ir::PTXInstruction::St:
		{
			switch (instr.addressSpace) {
				case ir::PTXInstruction::Global:
				case ir::PTXInstruction::Local:
				{
					return Memory_offchip;
				}

				default:
				{
					return Memory_onchip;
				}
			}
		}
		break;

	// Parallelism
	case ir::PTXInstruction::Bar:
	case ir::PTXInstruction::Red:
	case ir::PTXInstruction::Vote:
		{
			return Parallelism;
		}
		break;

	// Control flow
	case ir::PTXInstruction::Bra:
	case ir::PTXInstruction::Call:
	case ir::PTXInstruction::Exit:
	case ir::PTXInstruction::Reconverge:
	case ir::PTXInstruction::Ret:
		{
			return Control;
		}
		break;

	// this should be an exhaustive list!
	default:
		throw hydrazine::Exception("InstructionTraceGenerator - PTX instruction not supported");
		break;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////

trace::InstructionTraceGenerator::Header::Header():
	format(trace::TraceGenerator::InstructionTraceFormat), dynamic_count(0), static_count(0) {
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////

int trace::InstructionTraceGenerator::counter = 0;

/*!
	default constructor
*/
trace::InstructionTraceGenerator::InstructionTraceGenerator() {

}

/*!
	\brief destructs instruction trace generator
*/
trace::InstructionTraceGenerator::~InstructionTraceGenerator() {

}

/*!
	\brief called when a traced kernel is launched to retrieve some 
		parameters from the kernel
*/
void trace::InstructionTraceGenerator::initialize(const ir::ExecutableKernel& kernel) {

	// initialize kernel entry
	
	_entry.name = kernel.name;
	_entry.module = kernel.module->modulePath;
	_entry.format = BranchTraceFormat;

	std::string name = kernel.name;

	if( name.size() > 20 )
	{
		name.resize( 20 );
	}

	std::stringstream stream;
	stream << _entry.format << "_" << _counter++;

	boost::filesystem::path path( database );
	path = path.parent_path();
	path /= _entry.program + "_" + name + "_" + stream.str() + ".header";
	path = boost::filesystem::system_complete( path );
	
	_entry.header = path.string();
	
	_header.format = InstructionTraceFormat;
		

	// static counts
	for (ir::PTXKernel::InstructionVector::const_iterator instr_it = kernel.instructions.begin();
		instr_it != kernel.instructions.end(); ++instr_it ) {
	
		const ir::PTXInstruction & instr = *instr_it;
		
		FunctionalUnit fu = getFunctionalUnit(instr);
		if (instructionCounter.find(fu) == instructionCounter.end()) {
			OpcodeCountMap opMap;
			instructionCounter[fu] = opMap;
		}
		if (instructionCounter[fu].find(instr.opcode) == instructionCounter[fu].end()) {
			InstructionCounter counter;
			instructionCounter[fu][instr.opcode] = counter;
		}
		
		++instructionCounter[fu][instr.opcode].static_count;
	}
}

/*!
	\brief Called whenever an event takes place.

	Note, the const reference 'event' is only valid until event() 
	returns
*/
void trace::InstructionTraceGenerator::event(const TraceEvent & event) {
	// every instruction we encounter is guaranteed to be mapped to in the instructionCounter
	// data structure
	FunctionalUnit fu = getFunctionalUnit(* event->instruction);
	instructionCounter[fu][event.instruction->opcode].count(* event.instruction, active.count());
}

/*! 
	\brief Called when a kernel is finished. There will be no more 
		events for this kernel.
*/
void trace::InstructionTraceGenerator::finish() {
	//
	// stream to file
	//
	_entry.updateDatabase( database );

	std::ofstream hfile( _entry.header.c_str() );
	boost::archive::text_oarchive harchive( hfile );

	if( !hfile.is_open() )
	{
		throw hydrazine::Exception(
			"Failed to open InstructionTraceGenerator header file " 
			+ _entry.header );
	}
	
	harchive << _header;
	harchive << instructionCounter;
	
	hfile.close();
}

//////////////////////////////////////////////////////////////////////////////////////////////////

