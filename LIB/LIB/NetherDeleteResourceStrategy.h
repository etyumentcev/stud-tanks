#ifndef _NETHER_DELETE_RESOURCE_STRATEGY_H_
#define _NETHER_DELETE_RESOURCE_STRATEGY_H_

#include "DeleteResourceStrategy.h"

class NetherDeleteResourceStrategy : public DeleteResourceStrategy 
{ 
public: 
	NetherDeleteResourceStrategy();
	virtual void apply(void*) throw(); 
	virtual ~NetherDeleteResourceStrategy() throw();
	
}; 

#endif
