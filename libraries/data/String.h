#ifndef _STRING_H_
#define _STRING_H_

#include "IObject.h"

class String : public IObject
{
	std::string value_;
public:
	explicit String(std::string value);

	explicit operator std::string() const;

	std::string getKey() const override;

	virtual ~String() noexcept = default;
};

#endif
