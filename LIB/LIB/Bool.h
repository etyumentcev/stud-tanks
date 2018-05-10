#ifndef _BOOL_H_
#define _BOOL_H_

#include "Object.h"

class Bool : public Object
{
	bool value;
public:
	Bool(bool _value);

	~Bool();
};

#endif
