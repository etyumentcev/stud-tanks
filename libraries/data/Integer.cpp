#include "Integer.h"

Integer::Integer(const int value) : value_(value)
{

}

std::string Integer::getKey() const
{
	return "Integer";
}

Integer& Integer::operator=(const int value)
{
	value_ = value;
	return *this;
}

Integer::operator int() const
{
	return this->value_;
}

Pointer<IObject> Integer::getValue(const std::string key)
{
	return args_[key];
}
	
void Integer::setValue(const std::string key, const Pointer<IObject> value)
{
	args_[key] = value;
}
