#ifndef _IOCSTRATEGYERROR_H_
#define _IOCSTRATEGYERROR_H_
#include "IoCStrategy.h"


class IoCStrategyError :public IoCStrategy
{
public:
	IoCStrategyError();
	~IoCStrategyError();
	virtual void* Create(ArrayObjects const& args) throw (IoCException);
}

#endif