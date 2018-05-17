#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "IObject.h"

class Object : public IObject
{
public:

	virtual string getKey() = 0;

	virtual void setArgs() = 0;

	virtual ~Object() = 0;

};

#endif
