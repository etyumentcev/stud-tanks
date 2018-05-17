#ifndef _INTEGER_H_
#define _INTEGER_H_

#include "IObject.h"

class Integer : public IObject
{
	int value_;
public:
	explicit Integer(int value);

	std::string getKey() const override;

	Integer& operator=(int value);
	explicit operator int() const;

	virtual ~Integer();
};

#endif
