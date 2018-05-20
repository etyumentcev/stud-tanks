#ifndef _NETHER_DELETE_RESOURCE_STRATEGY_H_
#define _NETHER_DELETE_RESOURCE_STRATEGY_H_

#include "DeleteResourceStrategy.h"

class NetherDeleteResourceStrategy : public DeleteResourceStrategy 
{ 
public: 
	NetherDeleteResourceStrategy();

	void apply(void*) throw() override;

	virtual ~NetherDeleteResourceStrategy() throw() {}
}; 

#endif
