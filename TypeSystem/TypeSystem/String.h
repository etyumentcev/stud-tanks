#ifndef _STRING_H_
#define _STRING_H_

#include "Object.h"

#include <string>
#include <memory>

using namespace std;

class String : public Object
{
	string value;
public:
	String(string value);

	operator string*();

	virtual ~String();
};

#endif
