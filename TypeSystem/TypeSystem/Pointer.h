#ifndef _POINTER_H_
#define _POINTER_H_

#include <utility>

using namespace std;

template <typename T> class Pointer
{
	T* pointer_;
public:

	Pointer(T* pointer) : pointer_(move(pointer)){};
	//Pointer(IoCStrategyObjects* pointer) : pointer_(move(pointer)){};
	/*SmartPointer(SmartPointer <T> const& other);
	SmartPointer(SmartPointer <T> && otherSmartPointer);

	SmartPointer& operator=(const SmartPointer <T> & smartPointer);
	SmartPointer& operator=(SmartPointer <T> && otherSmartPointer) noexcept;
	T& operator* (SmartPointer <T> & other);*/

	T& operator*()
	{
		return *pointer_;
	}

	T* operator->()
	{
		return pointer_;
	}


	virtual ~Pointer()
	{
	}

};

#endif
