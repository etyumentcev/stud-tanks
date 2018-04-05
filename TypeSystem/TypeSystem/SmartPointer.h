#ifndef SMART_POINTER_H
#define SMART_POINTER_H

#include "Pointer.h"

template <typename T>

class SmartPointer : public Pointer<typename T>
{
	bool del_;
	T* pointer_;
public:
	SmartPointer(T* pointer);
	SmartPointer(SmartPointer <T> const& other);

	T& operator* (SmartPointer <T> & other);
	T getObject();
	~SmartPointer();
};

#endif
