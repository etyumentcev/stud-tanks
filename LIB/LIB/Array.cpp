#include "Array.h"

Array::Array(std::vector<Pointer<IObject>> array) : mArray(array)
{

}

Pointer<IObject> Array::operator[](const size_t index) const
{
	return mArray.at(index);
}

Pointer<IObject> Array::operator[](const size_t index)
{
	return mArray.at(index);
}

Array::~Array()
{

}
