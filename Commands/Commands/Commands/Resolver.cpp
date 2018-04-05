#include "Resolver.h"

void Resolver::addOneElement(String str, Command* obj)
{
	mapOfCommand.insert( std::pair<String, Command*> (str, obj));
}

Command * Resolver::createCommand(ArrayObjects &args)
{
	Command *command = mapOfCommand[args[0]];
	return command;
	//return 	mapOfCommand[args[0]](args);
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