#ifndef _INTEGER_H_
#define _INTEGER_H_

#include "Object.h"
#include <utility>

class Integer : public Object
{
	int value;
public:
	Integer(int _value);
	Integer();

	string getKey();
	void setArgs();

	operator int();

	~Integer();
};

#endif
