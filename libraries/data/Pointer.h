#ifndef _POINTER_H_
#define _POINTER_H_

#include "ResourceMonitor.h"

template<typename T> class Pointer
{ 
	ResourceMonitor* pointerMonitor_; 
public:
	explicit Pointer(ResourceMonitor *pointerMonitor) 
	: pointerMonitor_(pointerMonitor) 
		{ 
			pointerMonitor_->acquire(); 
		}

	Pointer(): pointerMonitor_(nullptr)
		{

		}

	Pointer(Pointer<T> const& other) 
	: pointerMonitor_(other.pointerMonitor_) 
		{ 
			pointerMonitor_->acquire(); 
		}

	template<typename Y>
	Pointer(Pointer<Y> const& other) 
	{ 
		Y* o = reinterpret_cast<Y*>(reinterpret_cast<Pointer<T> const&>(other).pointerMonitor_->resource()); 

		T* to = dynamic_cast<T*>(o); 
		if(!to) 
		{ 
			throw 1; 
		} 
		pointerMonitor_ = reinterpret_cast<Pointer<T> const&>(other).pointerMonitor_; 
		pointerMonitor_->acquire(); 
	}	

	Pointer<T>& operator=(Pointer<T> const& other) 
		{ 
			other.pointerMonitor_->acquire(); 
			pointerMonitor_->release();
			pointerMonitor_ = other.pointerMonitor_; 
			return *this; 
		} 

	T& operator*() 
		{ 
			return *reinterpret_cast<T*>(pointerMonitor_->resource()); 
		} 

	T* operator->() 
		{ 
			return reinterpret_cast<T*>(pointerMonitor_->resource()); 
		} 

	virtual ~Pointer() 
		{ 
			pointerMonitor_->release(); 
		}

}; 

#endif
