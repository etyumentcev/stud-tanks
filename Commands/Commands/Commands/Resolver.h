#ifndef _RESOLVER_H_
#define _RESOLVER_H_

#include "Command.h"
#include "Move.h"
#include "Rotate.h"
#include "Shoot.h"
#include <map>

typedef std::map<String, Command*> HashMap;

class Resolver
{
	HashMap mapOfCommand;
public:
	void createAndUseCommand(ArrayObjects &args);
	void addOneElement(String, Command*);
	HashMap fillMapOfCommand();
};


#endif

