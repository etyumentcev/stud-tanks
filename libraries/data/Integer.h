#ifndef _INTEGER_H_
#define _INTEGER_H_

#include <map>

#include "IObject.h"

class Integer : public IObject
{
	std::map<std::string, Pointer<IObject> > args_;
	int value_;
public:
	Integer() = default;
	explicit Integer(int value);

	std::string getKey() const override;
	Pointer<IObject> getValue(std::string key) override;
	void setValue(std::string key, Pointer<IObject> value) override;

	Integer& operator=(int value);
	explicit operator int() const;

	virtual ~Integer() noexcept = default;
};

#endif
