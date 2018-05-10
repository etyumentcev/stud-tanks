#ifndef _OBJECT_ARGS_H_
#define _OBJECT_ARGS_H_

#include "IObject.h"

#include <map>

class ObjectArgs : public IObject
{

	map<string, void*> args;

public:

	ObjectArgs();

	string getKey();

	void setArgs();

	virtual ~ObjectArgs();

};

#endif
