/*!
	\file BranchTraceGenerator.cpp
	
	\author Gregory Diamos
	\date Monday April 13, 2009
	
	\brief The source file for the BranchTraceGenerator class
*/

#ifndef BRANCH_TRACE_GENERATOR_CPP_INCLUDED
#define BRANCH_TRACE_GENERATOR_CPP_INCLUDED

#include <ocelot/trace/interface/BranchTraceGenerator.h>
#include <ocelot/trace/interface/TraceEvent.h>
#include <ocelot/executive/interface/EmulatedKernel.h>
#include <ocelot/ir/interface/Module.h>
#include <hydrazine/implementation/Exception.h>
#include <boost/filesystem.hpp>
#include <fstream>
#include <ocelot/trace/interface/BranchEvent.h>

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

namespace trace
{
		
	unsigned int BranchTraceGenerator::BranchTraceGenerator::_counter = 0;

	BranchTraceGenerator::BranchTraceGenerator()
	{
		_file = 0;
	}
	
	BranchTraceGenerator::~BranchTraceGenerator()
	{
		if( _file != 0 )
		{		
			
			_entry.updateDatabase( database );
			delete _archive;

			_file->close();	
			delete _file;
			
			std::ofstream hfile( _entry.header.c_str() );
			boost::archive::text_oarchive harchive( hfile );
		
			if( !hfile.is_open() )
			{
				throw hydrazine::Exception(
					"Failed to open BranchTraceGenerator header file " 
					+ _entry.header );
			}
			
			harchive << _header;
			
			hfile.close();
			
		}
	}

	void BranchTraceGenerator::initialize( 
		const executive::EmulatedKernel* kernel )
	{
		_entry.name = kernel->name;
		_entry.module = kernel->module->modulePath;
		_entry.format = BranchTraceFormat;

		std::stringstream stream;
		stream << _entry.format << "_" << _counter++;
		
		boost::filesystem::path path( database );
		path = path.parent_path();
		path /= _entry.program + "_" + kernel->name + "_" + stream.str() 
			+ ".trace";
		path = boost::filesystem::system_complete( path );
		
		_entry.path = path.string();
		
		path = path.parent_path();
		path /= _entry.program + "_" + kernel->name + "_" + stream.str() 
			+ ".header";
		path = boost::filesystem::system_complete( path );
		
		_entry.header = path.string();
		
		if( _file != 0 )
		{
			delete _archive;
			delete _file;
		}
		
		_file = new std::ofstream( _entry.path.c_str() );
		
		if( !_file->is_open() )
		{
			throw hydrazine::Exception(
				"Failed to open BranchTraceGenerator kernel trace file " 
				+ _entry.path );
		}
		
		_archive = new boost::archive::text_oarchive( *_file );
		
		_header.format = BranchTraceFormat;
		_header.instructions = 0;
		_header.branches = 0;
		_header.threads = kernel->threadCount;
		_header.activeThreads = 0;
		_header.maxContextStackSize = 0;
	}

	void BranchTraceGenerator::event( const TraceEvent& event )
	{
		if (event.contextStackSize > _header.maxContextStackSize) {
			_header.maxContextStackSize = event.contextStackSize;
		}

		if( event.instruction->opcode == ir::PTXInstruction::Bra )
		{
			BranchEvent entry( event.taken, event.fallthrough, event.PC, 
				_header.instructions );
			
			*_archive << entry;
			++_header.branches;
		}
		++_header.instructions;
		_header.activeThreads += event.active.count();
	}
	
}

#endif

