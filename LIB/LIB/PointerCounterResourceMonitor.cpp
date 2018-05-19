#include "PointerCounterResourceMonitor.h"

PointerCounterResourceMonitor::PointerCounterResourceMonitor(
	void *pointer, DeleteResourceStrategy* onDelete)
	: pointer_(pointer), counter_(0), onDelete_(onDelete) 
{ 

} 

void PointerCounterResourceMonitor::acquire() throw() 
{ 
	++counter_; 
} 

void PointerCounterResourceMonitor::release() throw() 
{ 
	if (--counter_ <= 0) 
	{ 
		onDelete_->apply(pointer_); 
		delete this; 
	} 
}

void* PointerCounterResourceMonitor::resource() throw() 
{ 
	return pointer_; 
}

PointerCounterResourceMonitor::~PointerCounterResourceMonitor() throw() 
{ 
	delete onDelete_; 
} 
