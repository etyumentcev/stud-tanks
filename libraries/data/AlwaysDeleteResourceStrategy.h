#ifndef _ALWAYS_DELETE_RESOURCE_STRATEGY_H_
#define _ALWAYS_DELETE_RESOURCE_STRATEGY_H_

#include "DeleteResourceStrategy.h"

class AlwaysDeleteResourceStrategy : public DeleteResourceStrategy 
{ 
public:
	AlwaysDeleteResourceStrategy() = default;

	void apply(void* resource) throw() override;

	virtual ~AlwaysDeleteResourceStrategy() throw() {}
}; 

#endif
