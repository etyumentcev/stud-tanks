#ifndef _STRING_H_
#define _STRING_H_

#include "Object.h"

#include <memory>

class String : public Object
{
	string value;
public:
	String(string value);

	operator string*();

	virtual ~String();
};

#endif
