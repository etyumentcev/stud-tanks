#include "String.h"

String::String(const std::string value) : value_(value)
{
	
}

String::operator std::string*()
{
	return &value_;
}
