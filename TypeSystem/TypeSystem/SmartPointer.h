#ifndef _SMART_POINTER_H_
#define _SMART_POINTER_H_

#include "Pointer.h"

template <typename T>

class SmartPointer : public Pointer<T>
{

	//bool del_;
	T* pointer_;

public:

	explicit SmartPointer(T* pointer) : pointer_(move(pointer)){};
	/*SmartPointer(SmartPointer <T> const& other);
	SmartPointer(SmartPointer <T> && otherSmartPointer);

	SmartPointer& operator=(const SmartPointer <T> & smartPointer);
	SmartPointer& operator=(SmartPointer <T> && otherSmartPointer) noexcept;
	T& operator* (SmartPointer <T> & other);*/

	T* getObject() {
	return pointer_;
};

	virtual ~SmartPointer(){

};

};


#endif
