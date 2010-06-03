/*! \file TestPTXAssembly.cpp
	\author Gregory Diamos <gregory.diamos@gatech.edu>
	\date Tuesday May 11, 2010
	\brief The source file for the TestPTXAssembly class.
*/

#ifndef TEST_PTX_ASSEMBLY_CPP_INCLUDED
#define TEST_PTX_ASSEMBLY_CPP_INCLUDED

#include <ocelot/ir/test/TestPTXAssembly.h>
#include <ocelot/ir/interface/PTXOperand.h>

#include <ocelot/api/interface/ocelot.h>

#include <hydrazine/implementation/ArgumentParser.h>
#include <hydrazine/implementation/Exception.h>
#include <hydrazine/implementation/string.h>
#include <hydrazine/implementation/math.h>

#include <ocelot/cuda/interface/cuda_runtime.h>

#include <climits>

template<typename T>
T getParameter(void* in, unsigned int offset)
{
	return *(T*)((char*)in + offset);
}

template<typename T>
void setParameter(void* output, unsigned int offset, T value)
{
	*(T*)((char*)output + offset) = value;
}

template <typename type, unsigned int size>
char* uniformRandom(test::Test::MersenneTwister& generator)
{
	type* allocation = new type[size];
	char* result = (char*) allocation;

	for(unsigned int i = 0; i < size * sizeof(type); ++i)
	{
		result[i] = generator();
	}
	
	return result;
}

////////////////////////////////////////////////////////////////////////////////
// TEST ADD/SUB
std::string testAdd_PTX(ir::PTXOperand::DataType type, bool sat, bool sub)
{
	std::stringstream result;
	std::string typeString = "." + ir::PTXOperand::toString(type);

	result << ".version 2.1 \n";
	result << ".entry test(.param .u64 out, .param .u64 in) \n";
	result << "{\t\n";
	result << "\t.reg .u64 %rIn, %rOut; \n";
	result << "\t.reg " << typeString << " %r<3>; \n";
	result << "\tld.param.u64 %rIn, [in]; \n";
	result << "\tld.param.u64 %rOut, [out]; \n";
	result << "\tld.global" << typeString << " %r0, [%rIn]; \n";
	result << "\tld.global" << typeString << " %r1, [%rIn + " 
		<< ir::PTXOperand::bytes(type) << "]; \n";
	if(sub)
	{
		result << "\tsub";
	}
	else
	{
		result << "\tadd";
	}
	if(sat) result << ".sat";
	result << typeString << " %r2, %r0, %r1; \n";
	result << "\tst.global" << typeString << " [%rOut], %r2; \n";
	result << "\texit; \n";
	result << "}\n";
	
	return result.str();
}

template <typename type, bool sat, bool sub>
void testAdd_REF(void* output, void* input)
{
	type r0 = getParameter<type>(input, 0);
	type r1 = getParameter<type>(input, sizeof(type));
	
	type result = 0;
	
	if(sat)
	{
		long long int t0 = r0;
		long long int t1 = r1;
		
		long long int tresult = 0;
		if(sub)
		{
			tresult = t0 - t1;
		}
		else
		{
			tresult = t0 + t1;
		}
		tresult = std::max(tresult, (long long int)INT_MIN);
		tresult = std::min(tresult, (long long int)INT_MAX);
		
		result = (type)tresult;
	}
	else
	{
		if(sub)
		{
			result = r0 - r1;
		}
		else
		{
			result = r0 + r1;
		}
	}
	
	setParameter(output, 0, result);
}

test::TestPTXAssembly::TypeVector testAdd_IN(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(2, type);
}

test::TestPTXAssembly::TypeVector testAdd_OUT(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(1, type);
}
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// TEST Carry
std::string testCarry_PTX(ir::PTXOperand::DataType type, bool sub)
{
	std::stringstream stream;
	std::string typeString = "." + ir::PTXOperand::toString(type);
	
	stream << ".version 2.1\n";
	stream << ".entry test(.param .u64 out, .param .u64 in)\n";
	stream << "{\n";
	stream << "\t.reg .u64 %rIn, %rOut;\n";
	stream << "\t.reg " << typeString << " %r<5>;\n";
	stream << "\tld.param.u64 %rIn, [in];\n";
	stream << "\tld.param.u64 %rOut, [out];\n";
	stream << "\tld.global" << typeString << " %r0, [%rIn]; \n";
	stream << "\tld.global" << typeString << " %r1, [%rIn + " 
		<< ir::PTXOperand::bytes(type) << "]; \n";
	
	if(sub)
	{
		stream << "\tsub.cc" << typeString << " %r2, %r1, %r0;\n";
		stream << "\tsubc.cc" << typeString << " %r3, %r2, %r0;\n";
		stream << "\tsubc" << typeString << " %r4, %r3, %r0;\n";
	}
	else
	{
		stream << "\tadd.cc" << typeString << " %r2, %r1, %r0;\n";
		stream << "\taddc.cc" << typeString << " %r3, %r2, %r0;\n";
		stream << "\taddc" << typeString << " %r4, %r3, %r0;\n";
	}
	
	stream << "\tst.global" << typeString << " [%rOut], %r4;\n";
	stream << "\texit;\n";
	stream << "}\n";
	
	return stream.str();
}

template <typename type, bool sub>
void testCarry_REF(void* output, void* input)
{
	type r0 = getParameter<type>(input, 0);
	type r1 = getParameter<type>(input, sizeof(type));
	
	type result = 0;
	
	long long int t0 = r0;
	long long int t1 = r1;
	
	long long int tresult = 0;
	long long int carry = 0;

	if(sub)
	{
		tresult = t1 - t0;
		carry = (tresult & 0x100000000LLU) >> 32;
		tresult = (type)tresult - t0 + carry;
		carry = (tresult & 0x100000000LLU) >> 32;
		tresult = (type)tresult - t0 + carry;
	}
	else
	{
		tresult = t1 + t0;
		carry = (tresult & 0x100000000LLU) >> 32;
		tresult = (type)tresult + t0 + carry;
		carry = (tresult & 0x100000000LLU) >> 32;
		tresult = (type)tresult + t0 + carry;
	}

	result = (type)tresult;
	
	setParameter(output, 0, result);
}

test::TestPTXAssembly::TypeVector testCarry_IN(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(2, type);
}

test::TestPTXAssembly::TypeVector testCarry_OUT(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(1, type);
}
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// TEST MUL
enum MulType
{
	MulHi,
	MulLo,
	MulWide
};

std::string testMul_PTX(ir::PTXOperand::DataType type, MulType op)
{
	std::stringstream stream;
	std::string typeString = "." + ir::PTXOperand::toString(type);
	std::string dTypeString = "." + ir::PTXOperand::toString(type);

	if(op == MulWide)
	{
		switch(type)
		{
			case ir::PTXOperand::u16: dTypeString = ".u32"; break;
			case ir::PTXOperand::u32: dTypeString = ".u64"; break;
			case ir::PTXOperand::s16: dTypeString = ".s32"; break;
			case ir::PTXOperand::s32: dTypeString = ".s64"; break;
			default: assertM(false, "Invalid data type.");
		}
	}
	
	stream << ".version 2.1\n";
	stream << ".entry test(.param .u64 out, .param .u64 in)\n";
	stream << "{\n";
	stream << "\t.reg .u64 %rIn, %rOut;\n";
	stream << "\t.reg " << typeString << " %r<2>;\n";
	stream << "\t.reg " << dTypeString << " %r2;\n";
	stream << "\tld.param.u64 %rIn, [in];\n";
	stream << "\tld.param.u64 %rOut, [out];\n";
	stream << "\tld.global" << typeString << " %r0, [%rIn]; \n";
	stream << "\tld.global" << typeString << " %r1, [%rIn + " 
		<< ir::PTXOperand::bytes(type) << "]; \n";
	
	if( op == MulHi )
	{
		stream << "\tmul.hi" << typeString << " %r2, %r1, %r0;\n";
	}
	else if( op == MulLo )
	{
		stream << "\tmul.lo" << typeString << " %r2, %r1, %r0;\n";
	}
	else
	{
		stream << "\tmul.wide" << typeString << " %r2, %r1, %r0;\n";
	}

	
	stream << "\tst.global" << dTypeString << " [%rOut], %r2;\n";
	stream << "\texit;\n";
	stream << "}\n";
	
	return stream.str();
}

template <typename type, MulType op>
void testMul_REF(void* output, void* input)
{
	type r0 = getParameter<type>(input, 0);
	type r1 = getParameter<type>(input, sizeof(type));
	type hi;
	type lo;
	
	hydrazine::multiplyHiLo(hi, lo, r0, r1);
	
	if(op == MulWide)
	{
		setParameter(output, 0, lo);
		setParameter(output, sizeof(type), hi);
	}
	else if(op == MulLo)
	{
		setParameter(output, 0, lo);
	}
	else
	{
		setParameter(output, 0, hi);
	}
}

test::TestPTXAssembly::TypeVector testMul_IN(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(2, type);
}

test::TestPTXAssembly::TypeVector testMul_OUT(
	test::TestPTXAssembly::DataType type, MulType op)
{
	if(op != MulWide)
	{
		return test::TestPTXAssembly::TypeVector(1, type);
	}
	else
	{
		switch(type)
		{
			case test::TestPTXAssembly::I16:
			{
				return test::TestPTXAssembly::TypeVector(1, 
					test::TestPTXAssembly::I32);
			}
			case test::TestPTXAssembly::I32:
			{
				return test::TestPTXAssembly::TypeVector(1, 
					test::TestPTXAssembly::I64);
			}
			default: assertM(false, "Invalid data type for wide multiply.");
		}		
	}
}
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// TEST MAD
std::string testMad_PTX(ir::PTXOperand::DataType type, MulType op, bool sat)
{
	std::stringstream stream;
	std::string typeString = "." + ir::PTXOperand::toString(type);
	std::string dTypeString = "." + ir::PTXOperand::toString(type);

	if(op == MulWide)
	{
		switch(type)
		{
			case ir::PTXOperand::u16: dTypeString = ".u32"; break;
			case ir::PTXOperand::u32: dTypeString = ".u64"; break;
			case ir::PTXOperand::s16: dTypeString = ".s32"; break;
			case ir::PTXOperand::s32: dTypeString = ".s64"; break;
			default: assertM(false, "Invalid data type.");
		}
	}
	
	stream << ".version 2.1\n";
	stream << ".entry test(.param .u64 out, .param .u64 in)\n";
	stream << "{\n";
	stream << "\t.reg .u64 %rIn, %rOut;\n";
	stream << "\t.reg " << typeString << " %r<2>;\n";
	stream << "\t.reg " << dTypeString << " %r2;\n";
	stream << "\t.reg " << dTypeString << " %r3;\n";
	stream << "\tld.param.u64 %rIn, [in];\n";
	stream << "\tld.param.u64 %rOut, [out];\n";
	stream << "\tld.global" << typeString << " %r0, [%rIn]; \n";
	stream << "\tld.global" << typeString << " %r1, [%rIn + " 
		<< ir::PTXOperand::bytes(type) << "]; \n";
	stream << "\tld.global" << dTypeString << " %r2, [%rIn + " 
		<< 2 * ir::PTXOperand::bytes(type) << "]; \n";
	
	if( op == MulHi )
	{
		if( sat )
		{
			stream << "\tmad.hi.sat" << typeString << " %r3, %r0, %r1, %r2;\n";
		}
		else
		{
			stream << "\tmad.hi" << typeString << " %r3, %r0, %r1, %r2;\n";
		}
	}
	else if( op == MulLo )
	{
		stream << "\tmad.lo" << typeString << " %r3, %r0, %r1, %r2;\n";
	}
	else
	{
		stream << "\tmad.wide" << typeString << " %r3, %r0, %r1, %r2;\n";
	}

	
	stream << "\tst.global" << dTypeString << " [%rOut], %r3;\n";
	stream << "\texit;\n";
	stream << "}\n";
	
	return stream.str();
}

template <typename type, MulType op, bool sat>
void testMad_REF(void* output, void* input)
{
	type r0 = getParameter<type>(input, 0);
	type r1 = getParameter<type>(input, sizeof(type));
	type hi;
	type lo;
	
	hydrazine::multiplyHiLo(hi, lo, r0, r1);
	
	if(op == MulWide)
	{
		type r2 = getParameter<type>(input, 2 * sizeof(type));
		type r3 = getParameter<type>(input, 3 * sizeof(type));
		hydrazine::addHiLo(hi, lo, r2);
		hi += r3;
		setParameter(output, 0, lo);
		setParameter(output, sizeof(type), hi);
	}
	else if(op == MulLo)
	{
		type r2 = getParameter<type>(input, 2 * sizeof(type));
		lo += r2;
		setParameter(output, 0, lo);
	}
	else
	{
		type r2 = getParameter<type>(input, 2 * sizeof(type));
		if(sat)
		{
			long long int t = (long long int)hi + (long long int)r2;
			t = std::max(t, (long long int)INT_MIN);
			t = std::min(t, (long long int)INT_MAX);
			hi = t;
		}
		else
		{
			hi += r2;
		}
		setParameter(output, 0, hi);
	}
}

test::TestPTXAssembly::TypeVector testMad_IN(
	test::TestPTXAssembly::DataType type, MulType op)
{
	test::TestPTXAssembly::TypeVector vector(2, type);

	if(op != MulWide)
	{
		vector.push_back( type );
	}
	else
	{
		switch(type)
		{
			case test::TestPTXAssembly::I16:
			{
				vector.push_back( test::TestPTXAssembly::I32 );
				break;
			}
			case test::TestPTXAssembly::I32:
			{
				vector.push_back( test::TestPTXAssembly::I64 );
				break;
			}
			default: assertM(false, "Invalid data type for wide multiply.");
		}	
	}
	
	return vector;
}

test::TestPTXAssembly::TypeVector testMad_OUT(
	test::TestPTXAssembly::DataType type, MulType op)
{
	if(op != MulWide)
	{
		return test::TestPTXAssembly::TypeVector(1, type);
	}
	else
	{
		switch(type)
		{
			case test::TestPTXAssembly::I16:
			{
				return test::TestPTXAssembly::TypeVector(1, 
					test::TestPTXAssembly::I32);
			}
			case test::TestPTXAssembly::I32:
			{
				return test::TestPTXAssembly::TypeVector(1, 
					test::TestPTXAssembly::I64);
			}
			default: assertM(false, "Invalid data type for wide multiply.");
		}		
	}
}
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// TEST SAD
std::string testSad_PTX(ir::PTXOperand::DataType type)
{
	std::stringstream result;
	std::string typeString = "." + ir::PTXOperand::toString(type);

	result << ".version 2.1 \n";
	result << ".entry test(.param .u64 out, .param .u64 in) \n";
	result << "{\t\n";
	result << "\t.reg .u64 %rIn, %rOut; \n";
	result << "\t.reg " << typeString << " %r<4>; \n";
	result << "\tld.param.u64 %rIn, [in]; \n";
	result << "\tld.param.u64 %rOut, [out]; \n";
	result << "\tld.global" << typeString << " %r0, [%rIn]; \n";
	result << "\tld.global" << typeString << " %r1, [%rIn + " 
		<< ir::PTXOperand::bytes(type) << "]; \n";
	result << "\tld.global" << typeString << " %r2, [%rIn + " 
		<< 2 * ir::PTXOperand::bytes(type) << "]; \n";
	result << "\tsad" << typeString << " %r3, %r0, %r1, %r2; \n";
	result << "\tst.global" << typeString << " [%rOut], %r3; \n";
	result << "\texit; \n";
	result << "}\n";
	
	return result.str();
}

template <typename type>
void testSad_REF(void* output, void* input)
{
	type r0 = getParameter<type>(input, 0);
	type r1 = getParameter<type>(input, sizeof(type));
	type r2 = getParameter<type>(input, 2 * sizeof(type));
	
	type result = r2 + ( ( r0 < r1 ) ? ( r1 - r0 ) : ( r0 - r1 ) );
	
	setParameter(output, 0, result);
}

test::TestPTXAssembly::TypeVector testSad_IN(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(3, type);
}

test::TestPTXAssembly::TypeVector testSad_OUT(
	test::TestPTXAssembly::DataType type)
{
	return test::TestPTXAssembly::TypeVector(1, type);
}
////////////////////////////////////////////////////////////////////////////////

namespace test
{
	unsigned int TestPTXAssembly::bytes(DataType t)
	{
		switch(t)
		{
			case I8: return 1;
			case I16: return 2;
			case I32: return 4;
			case I64: return 8;
			case FP32: return 4;
			case FP64: return 8;
		}
		return 1;
	}
	
	bool TestPTXAssembly::_doOneTest(const TestHandle& test, unsigned int seed)
	{
		random.seed(seed);
		
		unsigned int inputSize = 0;
		unsigned int outputSize = 0;
		
		for(TypeVector::const_iterator type = test.inputTypes.begin(); 
			type != test.inputTypes.end(); ++type)
		{
			inputSize += bytes(*type);
		}
		
		for(TypeVector::const_iterator type = test.outputTypes.begin(); 
			type != test.outputTypes.end(); ++type)
		{
			outputSize += bytes(*type);
		}
		
		char* inputBlock = (*test.generator)(random);
		char* outputBlock = new char[outputSize];
		char* referenceBlock = new char[outputSize];
				
		bool pass = true;
		int devices = 0;
		int device = 0;
		
		cudaGetDeviceCount(&devices);
		
		try
		{
			std::stringstream stream(test.ptx);
			ocelot::registerPTXModule(stream, test.name);
			
			char* deviceInput;
			char* deviceOutput;
						
			if(devices > 0) device = random() % devices;
			cudaSetDevice(device);
			
			cudaMalloc((void**)&deviceInput, inputSize);
			cudaMalloc((void**)&deviceOutput, outputSize);
			
			cudaMemcpy(deviceInput, inputBlock, 
				inputSize, cudaMemcpyHostToDevice);
				
			cudaSetupArgument(&deviceOutput, 8, 0);
			cudaSetupArgument(&deviceInput, 8, 8);
			cudaConfigureCall( dim3( test.ctas, 1, 1 ), 
				dim3( test.threads, 1, 1 ), 0, 0 );
			ocelot::launch(test.name, "test");
			
			cudaMemcpy(outputBlock, deviceOutput, 
				outputSize, cudaMemcpyDeviceToHost);
			
			cudaFree(deviceInput);
			cudaFree(deviceOutput);
			
			ocelot::unregisterModule(test.name);
		}
		catch(const std::exception& e)
		{
			status << " Test '" << test.name 
				<< "' failed during CUDA run with exception - \n" 
				<< e.what() << "\n";
				
			cudaDeviceProp properties;
			cudaGetDeviceProperties(&properties, device);
			
			status << "  On device - " << device << " - '" 
				<< properties.name << "'\n";
			
			pass = false;
		}
		
		if(pass)
		{
			try
			{
				(*test.reference)(referenceBlock, inputBlock);
			}
			catch(const hydrazine::Exception& e)
			{
				status << " Failed during reference run with exception - " 
					<< e.what() << "\n";
				pass = false;
			}
		}
		
		unsigned int index = 0;
		for(TypeVector::const_iterator type = test.outputTypes.begin(); 
			type != test.outputTypes.end() && pass; ++type)
		{
			switch(*type)
			{
				case I8:
				{
					char computed = getParameter<char>(outputBlock, index);
					char reference = getParameter<char>(referenceBlock, index);
					if(computed != reference)
					{
						pass = false;
						status << " Output parameter " 
							<< std::distance(test.outputTypes.begin(), type) 
							<< " (I8) computed value - " << (int)computed 
							<< " does not match reference value - " 
							<< (int)reference << "\n";
					}
					break;
				}
				case I16:
				{
					short computed = getParameter<short>(outputBlock, index);
					short reference = getParameter<short>(
						referenceBlock, index);
					if(computed != reference)
					{
						pass = false;
						status << " Output parameter " 
							<< std::distance(test.outputTypes.begin(), type) 
							<< " (I16) computed value - " << computed 
							<< " does not match reference value - " 
							<< reference << "\n";
					}
					break;
				}				
				case I32:
				{
					int computed = getParameter<int>(outputBlock, index);
					int reference = getParameter<int>(referenceBlock, index);
					if(computed != reference)
					{
						pass = false;
						status << "Test '" << test.name << "' (seed " 
							<< seed << "): failed, output parameter " 
							<< std::distance(test.outputTypes.begin(), type) 
							<< " (I32) computed value - " << computed 
							<< " does not match reference value - " 
							<< reference << "\n";
					}
					break;
				}
				case I64:
				{
					long long int computed = getParameter<long long int>(
						outputBlock, index);
					long long int reference = getParameter<long long int>(
						referenceBlock, index);
					if(computed != reference)
					{
						pass = false;
						status << "Test '" << test.name << "' (seed " 
							<< seed << "): failed, output parameter " 
							<< std::distance(test.outputTypes.begin(), type) 
							<< " (I64) computed value - " << computed 
							<< " does not match reference value - " 
							<< reference << "\n";
					}
					break;
				}
				case FP32:
				{
					float computed = getParameter<float>(outputBlock, index);
					float reference = getParameter<float>(
						referenceBlock, index);
					if(computed != reference)
					{
						pass = false;
						status << " Output parameter " 
							<< std::distance(test.outputTypes.begin(), type) 
							<< " (F32) computed value - " << computed 
							<< " does not match reference value - " 
							<< reference << "\n";
					}
					break;
				}
				case FP64:
				{
					double computed = getParameter<double>(outputBlock, index);
					double reference = getParameter<double>(
						referenceBlock, index);
					if(computed != reference)
					{
						pass = false;
						status << " Output parameter " 
							<< std::distance(test.outputTypes.begin(), type) 
							<< " (F64) computed value - " << computed 
							<< " does not match reference value - " 
							<< reference << "\n";
					}
					break;
				}

			}
			index += bytes(*type);
		}
		
		delete[] inputBlock;
		delete[] outputBlock;
		delete[] referenceBlock;
	
		return pass;
	}

	void TestPTXAssembly::_loadTests()
	{
		add("TestAdd-u16", testAdd_REF<unsigned short, false, false>, 
			testAdd_PTX(ir::PTXOperand::u16, false, false), 
			testAdd_OUT(I16), testAdd_IN(I16), 
			uniformRandom<unsigned short, 2>, 1, 1);
		add("TestAdd-s16", testAdd_REF<signed short, false, false>, 
			testAdd_PTX(ir::PTXOperand::s16, false, false), 
			testAdd_OUT(I16), testAdd_IN(I16), 
			uniformRandom<signed short, 2>, 1, 1);
		add("TestAdd-u32", testAdd_REF<unsigned int, false, false>, 
			testAdd_PTX(ir::PTXOperand::u32, false, false), 
			testAdd_OUT(I32), testAdd_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);
		add("TestAdd-s32", testAdd_REF<signed int, false, false>, 
			testAdd_PTX(ir::PTXOperand::s32, false, false), 
			testAdd_OUT(I32), testAdd_IN(I32), 
			uniformRandom<signed int, 2>, 1, 1);
		add("TestAdd-s32-sat", testAdd_REF<signed int, true, false>, 
			testAdd_PTX(ir::PTXOperand::s32, true, false), 
			testAdd_OUT(I32), testAdd_IN(I32), 
			uniformRandom<signed int, 2>, 1, 1);
		add("TestAdd-u64", testAdd_REF<long long unsigned int, false, false>, 
			testAdd_PTX(ir::PTXOperand::u64, false, false), 
			testAdd_OUT(I64), testAdd_IN(I64), 
			uniformRandom<long long unsigned int, 2>, 1, 1);
		add("TestAdd-s64", testAdd_REF<long long signed int, false, false>, 
			testAdd_PTX(ir::PTXOperand::s64, false, false), 
			testAdd_OUT(I64), testAdd_IN(I64), 
			uniformRandom<long long signed int, 2>, 1, 1);

		add("TestSub-u16", testAdd_REF<unsigned short, false, true>, 
			testAdd_PTX(ir::PTXOperand::u16, false, true), 
			testAdd_OUT(I16), testAdd_IN(I16), 
			uniformRandom<unsigned short, 2>, 1, 1);
		add("TestSub-s16", testAdd_REF<signed short, false, true>, 
			testAdd_PTX(ir::PTXOperand::s16, false, true), 
			testAdd_OUT(I16), testAdd_IN(I16), 
			uniformRandom<signed short, 2>, 1, 1);
		add("TestSub-u32", testAdd_REF<unsigned int, false, true>, 
			testAdd_PTX(ir::PTXOperand::u32, false, true), 
			testAdd_OUT(I32), testAdd_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);
		add("TestSub-s32", testAdd_REF<signed int, false, true>, 
			testAdd_PTX(ir::PTXOperand::s32, false, true), 
			testAdd_OUT(I32), testAdd_IN(I32), 
			uniformRandom<signed int, 2>, 1, 1);
		add("TestSub-s32-sat", testAdd_REF<signed int, true, true>, 
			testAdd_PTX(ir::PTXOperand::s32, true, true), 
			testAdd_OUT(I32), testAdd_IN(I32), 
			uniformRandom<signed int, 2>, 1, 1);
		add("TestSub-u64", testAdd_REF<long long unsigned int, false, true>, 
			testAdd_PTX(ir::PTXOperand::u64, false, true), 
			testAdd_OUT(I64), testAdd_IN(I64), 
			uniformRandom<long long unsigned int, 2>, 1, 1);
		add("TestSub-s64", testAdd_REF<long long signed int, false, true>, 
			testAdd_PTX(ir::PTXOperand::s64, false, true), 
			testAdd_OUT(I64), testAdd_IN(I64), 
			uniformRandom<long long signed int, 2>, 1, 1);

		add("TestSub-Carry-s32", testCarry_REF<signed int, true>, 
			testCarry_PTX(ir::PTXOperand::s32, true), 
			testCarry_OUT(I32), testCarry_IN(I32), 
			uniformRandom<signed int, 2>, 1, 1);
		add("TestSub-Carry-u32", testCarry_REF<unsigned int, true>, 
			testCarry_PTX(ir::PTXOperand::u32, true), 
			testCarry_OUT(I32), testCarry_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);

		add("TestAdd-Carry-s32", testCarry_REF<signed int, false>, 
			testCarry_PTX(ir::PTXOperand::s32, false), 
			testCarry_OUT(I32), testCarry_IN(I32), 
			uniformRandom<signed int, 2>, 1, 1);
		add("TestAdd-Carry-u32", testCarry_REF<unsigned int, false>, 
			testCarry_PTX(ir::PTXOperand::u32, false), 
			testCarry_OUT(I32), testCarry_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);	

		add("TestMul-Lo-u16", testMul_REF<unsigned short, MulLo>, 
			testMul_PTX(ir::PTXOperand::u16, MulLo), 
			testMul_OUT(I16, MulLo), testMul_IN(I16), 
			uniformRandom<unsigned short, 2>, 1, 1);
		add("TestMul-Hi-u16", testMul_REF<unsigned short, MulHi>, 
			testMul_PTX(ir::PTXOperand::u16, MulHi), 
			testMul_OUT(I16, MulHi), testMul_IN(I16), 
			uniformRandom<unsigned short, 2>, 1, 1);
		add("TestMul-Wide-u16", testMul_REF<unsigned short, MulWide>, 
			testMul_PTX(ir::PTXOperand::u16, MulWide), 
			testMul_OUT(I16, MulWide), testMul_IN(I16), 
			uniformRandom<unsigned short, 2>, 1, 1);

		add("TestMul-Lo-s16", testMul_REF<short, MulLo>, 
			testMul_PTX(ir::PTXOperand::s16, MulLo), 
			testMul_OUT(I16, MulLo), testMul_IN(I16), 
			uniformRandom<short, 2>, 1, 1);
		add("TestMul-Hi-s16", testMul_REF<short, MulHi>, 
			testMul_PTX(ir::PTXOperand::s16, MulHi), 
			testMul_OUT(I16, MulHi), testMul_IN(I16), 
			uniformRandom<short, 2>, 1, 1);
		add("TestMul-Wide-s16", testMul_REF<short, MulWide>, 
			testMul_PTX(ir::PTXOperand::s16, MulWide), 
			testMul_OUT(I16, MulWide), testMul_IN(I16), 
			uniformRandom<short, 2>, 1, 1);

		add("TestMul-Lo-u32", testMul_REF<unsigned int, MulLo>, 
			testMul_PTX(ir::PTXOperand::u32, MulLo), 
			testMul_OUT(I32, MulLo), testMul_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);
		add("TestMul-Hi-u32", testMul_REF<unsigned int, MulHi>, 
			testMul_PTX(ir::PTXOperand::u32, MulHi), 
			testMul_OUT(I32, MulHi), testMul_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);
		add("TestMul-Wide-u32", testMul_REF<unsigned int, MulWide>, 
			testMul_PTX(ir::PTXOperand::u32, MulWide), 
			testMul_OUT(I32, MulWide), testMul_IN(I32), 
			uniformRandom<unsigned int, 2>, 1, 1);

		add("TestMul-Lo-s32", testMul_REF<int, MulLo>, 
			testMul_PTX(ir::PTXOperand::s32, MulLo), 
			testMul_OUT(I32, MulLo), testMul_IN(I32), 
			uniformRandom<int, 2>, 1, 1);
		add("TestMul-Hi-s32", testMul_REF<int, MulHi>, 
			testMul_PTX(ir::PTXOperand::s32, MulHi), 
			testMul_OUT(I32, MulHi), testMul_IN(I32), 
			uniformRandom<int, 2>, 1, 1);
		add("TestMul-Wide-s32", testMul_REF<int, MulWide>, 
			testMul_PTX(ir::PTXOperand::s32, MulWide), 
			testMul_OUT(I32, MulWide), testMul_IN(I32), 
			uniformRandom<int, 2>, 1, 1);

		add("TestMul-Lo-u64", testMul_REF<long long unsigned int, MulLo>, 
			testMul_PTX(ir::PTXOperand::u64, MulLo), 
			testMul_OUT(I64, MulLo), testMul_IN(I64), 
			uniformRandom<long long unsigned int, 2>, 1, 1);
		add("TestMul-Hi-u64", testMul_REF<long long unsigned int, MulHi>, 
			testMul_PTX(ir::PTXOperand::u64, MulHi), 
			testMul_OUT(I64, MulHi), testMul_IN(I64), 
			uniformRandom<long long unsigned int, 2>, 1, 1);

		add("TestMul-Lo-s64", testMul_REF<long long int, MulLo>, 
			testMul_PTX(ir::PTXOperand::s64, MulLo), 
			testMul_OUT(I64, MulLo), testMul_IN(I64), 
			uniformRandom<long long int, 2>, 1, 1);
		add("TestMul-Hi-s64", testMul_REF<long long int, MulHi>, 
			testMul_PTX(ir::PTXOperand::s64, MulHi), 
			testMul_OUT(I64, MulHi), testMul_IN(I64), 
			uniformRandom<long long int, 2>, 1, 1);

		add("TestMad-Lo-u16", testMad_REF<unsigned short, MulLo, false>, 
			testMad_PTX(ir::PTXOperand::u16, MulLo, false), 
			testMad_OUT(I16, MulLo), testMad_IN(I16, MulLo), 
			uniformRandom<unsigned short, 3>, 1, 1);
		add("TestMad-Hi-u16", testMad_REF<unsigned short, MulHi, false>, 
			testMad_PTX(ir::PTXOperand::u16, MulHi, false), 
			testMad_OUT(I16, MulHi), testMad_IN(I16, MulHi), 
			uniformRandom<unsigned short, 3>, 1, 1);
		add("TestMad-Wide-u16", testMad_REF<unsigned short, MulWide, false>, 
			testMad_PTX(ir::PTXOperand::u16, MulWide, false), 
			testMad_OUT(I16, MulWide), testMad_IN(I16, MulWide), 
			uniformRandom<unsigned short, 4>, 1, 1);

		add("TestMad-Lo-s16", testMad_REF<short, MulLo, false>, 
			testMad_PTX(ir::PTXOperand::s16, MulLo, false), 
			testMad_OUT(I16, MulLo), testMad_IN(I16, MulLo), 
			uniformRandom<short, 3>, 1, 1);
		add("TestMad-Hi-s16", testMad_REF<short, MulHi, false>, 
			testMad_PTX(ir::PTXOperand::s16, MulHi, false), 
			testMad_OUT(I16, MulHi), testMad_IN(I16, MulHi), 
			uniformRandom<short, 3>, 1, 1);
		add("TestMad-Wide-s16", testMad_REF<short, MulWide, false>, 
			testMad_PTX(ir::PTXOperand::s16, MulWide, false), 
			testMad_OUT(I16, MulWide), testMad_IN(I16, MulWide), 
			uniformRandom<short, 4>, 1, 1);

		add("TestMad-Lo-u32", testMad_REF<unsigned int, MulLo, false>, 
			testMad_PTX(ir::PTXOperand::u32, MulLo, false), 
			testMad_OUT(I32, MulLo), testMad_IN(I32, MulLo), 
			uniformRandom<unsigned int, 3>, 1, 1);
		add("TestMad-Hi-u32", testMad_REF<unsigned int, MulHi, false>, 
			testMad_PTX(ir::PTXOperand::u32, MulHi, false), 
			testMad_OUT(I32, MulHi), testMad_IN(I32, MulHi), 
			uniformRandom<unsigned int, 3>, 1, 1);
		add("TestMad-Wide-u32", testMad_REF<unsigned int, MulWide, false>, 
			testMad_PTX(ir::PTXOperand::u32, MulWide, false), 
			testMad_OUT(I32, MulWide), testMad_IN(I32, MulWide), 
			uniformRandom<unsigned int, 4>, 1, 1);

		add("TestMad-Lo-s32", testMad_REF<int, MulLo, false>, 
			testMad_PTX(ir::PTXOperand::s32, MulLo, false), 
			testMad_OUT(I32, MulLo), testMad_IN(I32, MulLo), 
			uniformRandom<int, 3>, 1, 1);
		add("TestMad-Hi-s32", testMad_REF<int, MulHi, false>, 
			testMad_PTX(ir::PTXOperand::s32, MulHi, false), 
			testMad_OUT(I32, MulHi), testMad_IN(I32, MulHi), 
			uniformRandom<int, 3>, 1, 1);
		add("TestMad-Sat-Hi-s32", testMad_REF<int, MulHi, true>, 
			testMad_PTX(ir::PTXOperand::s32, MulHi, true), 
			testMad_OUT(I32, MulHi), testMad_IN(I32, MulHi), 
			uniformRandom<int, 3>, 1, 1);
		add("TestMad-Wide-s32", testMad_REF<int, MulWide, false>, 
			testMad_PTX(ir::PTXOperand::s32, MulWide, false), 
			testMad_OUT(I32, MulWide), testMad_IN(I32, MulWide), 
			uniformRandom<int, 4>, 1, 1);

		add("TestMad-Lo-u64", testMad_REF<long long unsigned int, MulLo, false>,
			testMad_PTX(ir::PTXOperand::u64, MulLo, false), 
			testMad_OUT(I64, MulLo), testMad_IN(I64, MulLo), 
			uniformRandom<long long unsigned int, 3>, 1, 1);
		add("TestMad-Hi-u64", testMad_REF<long long unsigned int, MulHi, false>,
			testMad_PTX(ir::PTXOperand::u64, MulHi, false), 
			testMad_OUT(I64, MulHi), testMad_IN(I64, MulHi), 
			uniformRandom<long long unsigned int, 3>, 1, 1);

		add("TestMad-Lo-s64", testMad_REF<long long int, MulLo, false>, 
			testMad_PTX(ir::PTXOperand::s64, MulLo, false), 
			testMad_OUT(I64, MulLo), testMad_IN(I64, MulLo), 
			uniformRandom<long long int, 3>, 1, 1);
		add("TestMad-Hi-s64", testMad_REF<long long int, MulHi, false>, 
			testMad_PTX(ir::PTXOperand::s64, MulHi, false), 
			testMad_OUT(I64, MulHi), testMad_IN(I64, MulHi), 
			uniformRandom<long long int, 3>, 1, 1);

		add("TestSad-u16", testSad_REF<unsigned short>, 
			testSad_PTX(ir::PTXOperand::u16), 
			testSad_OUT(I16), testSad_IN(I16), 
			uniformRandom<unsigned short, 3>, 1, 1);
		add("TestSad-s16", testSad_REF<short>, 
			testSad_PTX(ir::PTXOperand::s16), 
			testSad_OUT(I16), testSad_IN(I16), 
			uniformRandom<short, 3>, 1, 1);

		add("TestSad-u32", testSad_REF<unsigned int>, 
			testSad_PTX(ir::PTXOperand::u32), 
			testSad_OUT(I32), testSad_IN(I32), 
			uniformRandom<unsigned int, 3>, 1, 1);
		add("TestSad-s32", testSad_REF<int>, 
			testSad_PTX(ir::PTXOperand::s32), 
			testSad_OUT(I32), testSad_IN(I32), 
			uniformRandom<int, 3>, 1, 1);

		add("TestSad-u64", testSad_REF<long long unsigned int>, 
			testSad_PTX(ir::PTXOperand::u64), 
			testSad_OUT(I64), testSad_IN(I64), 
			uniformRandom<long long unsigned int, 3>, 1, 1);
		add("TestSad-s64", testSad_REF<long long int>, 
			testSad_PTX(ir::PTXOperand::s64), 
			testSad_OUT(I64), testSad_IN(I64), 
			uniformRandom<long long int, 3>, 1, 1);

	}

	TestPTXAssembly::TestPTXAssembly(hydrazine::Timer::Second l, 
		unsigned int t) : _timeLimit(l), _tolerableFailures(t)
	{
		name = "TestPTXAssembly";
		
		description = "A unit test framework for PTX. Runs random inputs ";
		description += "through unit tests on all available devices until ";
		description += "a timer expires.";		
	}
	
	void TestPTXAssembly::add(const std::string& name, 
		ReferenceFunction function, const std::string& ptx, 
		const TypeVector& out, const TypeVector& in, 
		GeneratorFunction generator, unsigned int threads, unsigned int ctas)
	{
		// TODO change this to std::tr1::regex when gcc gets its act together
		if(!regularExpression.empty() && regularExpression != name) return;
		
		TestHandle test;
		test.name = name;
		test.reference = function;
		test.generator = generator;
		test.ptx = ptx;
		test.inputTypes = in;
		test.outputTypes = out;
		test.threads = threads;
		test.ctas = ctas;
		
		if(print)
		{
			std::cout << "Added test - '" << name << "'\n";
			std::cout << ptx << "\n";
		}
		
		_tests.push_back(std::move(test));
	}
	
	
	
	bool TestPTXAssembly::doTest()
	{
		_loadTests();
		
		hydrazine::Timer::Second perTestTimeLimit = _timeLimit / _tests.size();
		hydrazine::Timer timer;
		
		unsigned int failures = 0;
		
		for(TestVector::iterator test = _tests.begin(); 
			test != _tests.end(); ++test)
		{
			timer.stop();
			timer.start();
			unsigned int i = 0;
			for( ; timer.seconds() < perTestTimeLimit; ++i)
			{
				bool result = _doOneTest(*test, seed + i);
				
				if(!result)
				{
					status << "Test '" << test->name << "' seed '" 
						<< (seed + i) << "' failed.\n";
					if(++failures > _tolerableFailures) return 0;
				}
				
				timer.stop();
			}
			status << "Ran '" << test->name << "' for " 
				<< i << " iterations.\n";	
		}
		
		return failures == 0;
	}
}

int main(int argc, char** argv)
{
	hydrazine::ArgumentParser parser(argc, argv);
	test::TestPTXAssembly test;
	parser.description(test.testDescription());

	parser.parse("-v", "--verbose", test.verbose, false,
		"Print out status info after the test.");
	parser.parse("-p", "--print-ptx", test.print, false,
		"Print test kernels as they are added.");
	parser.parse("-t", "--test", test.regularExpression, "",
		"Only select tests matching this expression.");
	parser.parse("-s", "--seed", test.seed, 0,
		"Random seed for generating input data. 0 implies seed with time.");
	parser.parse();

	test.test();
	
	return test.passed();
}

#endif

