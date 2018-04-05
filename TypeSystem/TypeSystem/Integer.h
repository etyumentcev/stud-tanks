#ifndef _INTEGER_H_
#define _INTEGER_H_

#include "Object.h"

class Integer : public Object
{
	int value;
public:
	Integer(int _value);

	~Integer();
};

#endif
