#ifndef _POINTER_H_
#define _POINTER_H_

#include "ResourceMonitor.h"

template<typename T> class Pointer
{ 
	ResourceMonitor* pointerMonitor; 
public: 
	Pointer(ResourceMonitor *_pointerMonitor) 
	: pointerMonitor(_pointerMonitor) 
		{ 
			pointerMonitor->acquire(); 
		} 

	Pointer(Pointer<T> const& other) 
	: pointerMonitor(other.pointerMonitor) 
		{ 
			pointerMonitor->acquire(); 
		} 

	Pointer<T>& operator=(Pointer<T> const& other) 
		{ 
			other.pointerMonitor->acquire(); 
			pointerMonitor->release(); 

			pointerMonitor = other.pointerMonitor; 
			return *this; 
		} 

	T& operator*() 
		{ 
			return *reinterpret_cast<T*>(pointerMonitor->resource()); 
		} 

	T* operator->() 
		{ 
			return reinterpret_cast<T*>(pointerMonitor->resource()); 
		} 

	virtual ~Pointer() 
		{ 
			poointerMonitor->release(); 
		} 

}; 

#endif
