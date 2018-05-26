#include "Array.h"

Array::Array(const std::vector<Pointer<IObject> > array) : array_(array)
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

std::string Array::getKey() const
{
	return "Array";
}

Pointer<IObject> Array::getValue(const std::string key)
{
	return args_[key];
}
	
void Array::setValue(const std::string key, const Pointer<IObject> value)
{
	args_[key] = value;
}
