#ifndef _BOOL_H_
#define _BOOL_H_

#include <map>

#include "IObject.h"

class Bool : public IObject
{
	std::map<std::string, Pointer<IObject> > args_;
	bool value_;
public:
	Bool() = default;
	explicit Bool(bool value);

	Pointer<IObject> getValue(std::string key) override;
	void setValue(std::string key, Pointer<IObject> value) override;

	virtual ~Bool() noexcept = default;
};

#endif
