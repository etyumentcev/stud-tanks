#include "Resolver.h"

void Resolver::addOneElement(Obj str, Command* obj)
{
	mapOfCommand.insert( std::pair<Obj, Command*> (str, obj));
}

void Resolver::createAndUseCommand(Obj &args)
{
	Command *command = mapOfCommand[args[0]];
	command->Action(args[1]);
	delete command;
}

HashMap Resolver::fillMapOfCommand()
{
	Move move();
	Rotate rotate();
	Shoot shoot();
	mapOfCommand["Move"] = move;
	mapOfCommand["Rotate"] = rotate;
	mapOfCommand["Shoot"] = shoot;
	return mapOfCommand;
}