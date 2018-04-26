#ifndef _IOBJECT_H_
#define _IOBJECT_H_

#include <string>

using namespace std;

class IObject
{

public:

	virtual string getKey() = 0;

	virtual void setArgs() = 0;

	virtual ~IObject() = 0;

};

#endif
