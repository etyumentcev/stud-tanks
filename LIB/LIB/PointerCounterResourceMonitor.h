#ifndef _POINTER_COUNTER_RESOURCE_MONITOR_H_
#define _POINTER_COUNTER_RESOURCE_MONITOR_H_

#include "ResourceMonitor.h"
#include "DeleteResourceStrategy.h"

class PointerCounterResourceMonitor: public ResourceMonitor 
{ 
	void* pointer; 
	int counter; 
	DeleteResourceStrategy *onDelete; 
public: 
	PointerCounterResourceMonitor(void *_pointer, DeleteResourceStrategy* _onDelete);
	PointerCounterResourceMonitor();
	virtual void acquire() throw();
	virtual void release() throw();
	virtual void* resource() throw();

	virtual ~PointerCounterResourceMonitor() throw();
}; 

#endif
