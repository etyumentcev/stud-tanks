#ifndef _IOBJECT_H_
#define _IOBJECT_H_

#include <string>
#include <map>

#include "Pointer.h"

class IObject
{
	std::map<std::string, Pointer<IObject> > args_;
public:
	IObject() = default;

	virtual std::string getKey() const = 0;
	virtual Pointer<IObject> getValue(std::string key) = 0;
	virtual void setValue(std::string key, Pointer<IObject> value) = 0;

	virtual ~IObject() noexcept = default;
};

#endif
