#ifndef _IOCSTRATEGY_H_
#define _IOCSTRATEGY_H_

#include"..\Exceptions\IoCException.h"

class IoCStrategy
{
public:
	virtual void* Create(IObject const& args) throw(IoCException) = 0;
	virtual void* Create() throw(IoCException) = 0;
	virtual ~IoCStrategy() noexcept = 0;
};

#endif
