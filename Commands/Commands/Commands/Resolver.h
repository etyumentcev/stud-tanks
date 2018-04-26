#ifndef _RESOLVER_H_
#define _RESOLVER_H_

#include "Command.h"
#include "Move.h"
#include "Rotate.h"
#include "Shoot.h"
#include <map>

typedef std::map<Obj, Command*> HashMap;

class Resolver
{
	HashMap mapOfCommand;
public:
	void createAndUseCommand(Obj &args);
	void addOneElement(Obj, Command*);
	HashMap fillMapOfCommand();
};


#endif

