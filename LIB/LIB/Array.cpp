#include "Array.h"

Array::Array(const std::vector<Pointer<IObject>> array) : array_(array)
{

}

Pointer<IObject> Array::operator[](const size_t index) const
{
	return array_.at(index);
}

Pointer<IObject> Array::operator[](const size_t index)
{
	return array_.at(index);
}

Array::~Array()
{

}
