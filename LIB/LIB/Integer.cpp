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
