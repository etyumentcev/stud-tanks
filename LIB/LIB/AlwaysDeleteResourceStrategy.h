#ifndef _ALWAYS_DELETE_RESOURCE_STRATEGY_H_
#define _ALWAYS_DELETE_RESOURCE_STRATEGY_H_

#include "DeleteResourceStrategy.h"

class AlwaysDeleteResourceStrategy : public DeleteResourceStrategy 
{ 
public:
	AlwaysDeleteResourceStrategy();
	virtual void apply(void* resource) throw(); 
	virtual ~AlwaysDeleteResourceStrategy() throw();
}; 

#endif
