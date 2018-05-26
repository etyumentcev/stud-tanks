#ifndef _STRING_H_
#define _STRING_H_

#include <map>

#include "IObject.h"

class String : public IObject
{
	std::map<std::string, Pointer<IObject> > args_;
	std::string value_;
public:
	String() = default;
	explicit String(std::string value);

	explicit operator std::string() const;

	std::string getKey() const override;
	Pointer<IObject> getValue(std::string key) override;
	void setValue(std::string key, Pointer<IObject> value) override;

	virtual ~String() noexcept = default;
};

#endif
