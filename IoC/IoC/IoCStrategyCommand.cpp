#include "IoCStrategyCommand.h"

IoCStrategyCommand::IoCStrategyCommand()
{
	Resolver r = Resolver(); // resolver constructor.
	fillResover(r);// void fillResover(Resolver r) {fill map}
	resolver = r;
}



void* IoCStrategyCommand::Create(ArrayObjects const& args)
{
	command* c = r.createCommand(args); // arg[0] = command type
	return c;
}