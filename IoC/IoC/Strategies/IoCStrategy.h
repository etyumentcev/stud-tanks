#ifndef _IOCSTRATEGY_H_
#define _IOCSTRATEGY_H_

#include"..\Exceptions\IoCException.h"

class IoCStrategy
{
public:
	virtual void* Create(ArrayObjects const& args) throw(IoCException) = 0;
	virtual ~IoCStrategy() noexcept = 0;
};

#endif
