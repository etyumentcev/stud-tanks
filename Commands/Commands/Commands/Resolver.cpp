#include "Resolver.h"

void Resolver::addOneElement(String str, Command* obj)
{
	mapOfCommand.insert( std::pair<String, Command*> (str, obj));
}

void Resolver::createAndUseCommand(ArrayObjects &args)
{
	Command *command = mapOfCommand[args[0]];
	command->Action(/*массив*/);
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