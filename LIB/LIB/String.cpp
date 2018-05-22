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
