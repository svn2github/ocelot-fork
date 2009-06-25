/*!
	\file Instruction.cpp

	\author Andrew Kerr <arkerr@gatech.edu>

	\date Jan 15, 2009

	\brief base class for all instructions
*/

#include <ocelot/ir/interface/Instruction.h>

std::string ir::Instruction::toString( Architecture a ) {
	switch( a ) {
		case PTX: return "PTX"; break;
		case LLVM: return "LLVM"; break;
		case Emulated: return "Emulated"; break;
		case GPU: return "Gpu"; break;
		case x86: return "x86"; break;
		case x86_64: return "x86_64"; break;
		case SPU: return "SPU"; break;
		case Unknown: return "Unknown"; break;
	}
	return "Unknown";
}

ir::Instruction::Instruction() {
	ISA = PTX;
}

ir::Instruction::~Instruction() {

}


