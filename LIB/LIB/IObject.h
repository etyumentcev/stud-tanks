#ifndef _IOBJECT_H_
#define _IOBJECT_H_

#include <string>

class IObject
{
public:
	virtual std::string getKey() const = 0;

	virtual ~IObject() {}
};

#endif
