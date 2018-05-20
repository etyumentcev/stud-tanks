#ifndef _BOOL_H_
#define _BOOL_H_

#include "IObject.h"

class Bool : public IObject
{
	bool value_;
public:
	explicit Bool(bool value);

	virtual ~Bool() noexcept = default;
};

#endif
