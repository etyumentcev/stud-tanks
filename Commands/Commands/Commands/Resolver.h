#ifndef _RESOLVER_H_
#define _RESOLVER_H_

#include "Invoker.h"
#include <unordered_map>

typedef std::unordered_map<Invoker*, String> HashMap;

class Resolver
{
	void setNewElement(HashMap &comandMap);
	Invoker* getElementByKey(HashMap &comandMap);
};


#endif

