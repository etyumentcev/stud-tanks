#include "PointerCounterResourceMonitor.h"

PointerCounterResourceMonitor::PointerCounterResourceMonitor(
	void *_pointer, DeleteResourceStrategy* _onDelete)
	: pointer(_pointer), onDelete(_onDelete), counter(0) 
{ 

} 

void PointerCounterResourceMonitor::acquire() throw() 
{ 
	++counter; 
} 

void PointerCounterResourceMonitor::release() throw() 
{ 
	if (--counter <= 0) 
	{ 
		onDelete->apply(pointer); 
		delete this; 
	} 
}

void* PointerCounterResourceMonitor::resource() throw() 
{ 
	return pointer; 
}

PointerCounterResourceMonitor::~PointerCounterResourceMonitor() throw() 
{ 
	delete onDelete; 
} 
