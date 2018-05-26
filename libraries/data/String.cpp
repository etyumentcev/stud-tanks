#include "String.h"

String::String(const std::string value) : value_(value)
{
	
}

String::operator std::string() const
{
	return value_;
}

std::string String::getKey() const
{
	return "String";
}

Pointer<IObject> String::getValue(const std::string key)
{
	return args_[key];
}
	
void String::setValue(const std::string key, const Pointer<IObject> value)
{
	args_[key] = value;
}
