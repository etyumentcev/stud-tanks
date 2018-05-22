#ifndef _RESOURCE_MONITOR_H_
#define _RESOURCE_MONITOR_H_

#include "ResourceAllocationException.h"

class ResourceMonitor 
{ 
public: 
	virtual void acquire() throw (ResourceAllocationException) = 0; 
	virtual void release() throw() = 0; 
	virtual void* resource() throw() = 0;

	virtual ~ResourceMonitor() throw() {} 
}; 

#endif
