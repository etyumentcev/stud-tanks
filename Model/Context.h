#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "Strategies.h"

class Context
{
	Strategy* operation;
public:
	virtual ~Context() {}
	virtual void useStrategy() = 0;
	virtual void setStrategy(Strategy* s) = 0;
};
#endif
