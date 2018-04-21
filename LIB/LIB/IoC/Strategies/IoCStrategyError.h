#ifndef _IOCSTRATEGYERROR_H_
#define _IOCSTRATEGYERROR_H_
#include "IoCStrategy.h"


class IoCStrategyError :public IoCStrategy
{
	virtual void* Create(ArrayObjects const& args) throw (IoCException) = 0;
public:
	virtual void* Create() throw (IoCException);
}

#endif