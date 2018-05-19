#ifndef _POINTER_COUNTER_RESOURCE_MONITOR_H_
#define _POINTER_COUNTER_RESOURCE_MONITOR_H_

#include "ResourceMonitor.h"
#include "DeleteResourceStrategy.h"

class PointerCounterResourceMonitor: public ResourceMonitor 
{ 
	void* pointer_; 
	int counter_; 
	DeleteResourceStrategy* onDelete_; 
public: 
	PointerCounterResourceMonitor(void *pointer, DeleteResourceStrategy* onDelete);
	PointerCounterResourceMonitor();

	void acquire() throw() override;
	void release() throw() override;
	void* resource() throw() override;

	virtual ~PointerCounterResourceMonitor() throw();
}; 

#endif
