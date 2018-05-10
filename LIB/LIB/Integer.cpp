#include "Integer.h"

Integer::Integer(int _value) : value(move(_value))
{

}

Integer::operator int()
{
	return this->value;
}

Integer::~Integer()
{
	
}
