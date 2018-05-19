#ifndef _DELETE_RESOURCE_STRATEGY_H_
#define _DELETE_RESOURCE_STRATEGY_H_

class DeleteResourceStrategy 
{ 
public: 
	virtual void apply(void* resource) throw() = 0;
	
	virtual ~DeleteResourceStrategy() throw() {}
}; 

#endif
