#ifndef _IOC_STRATEGY_H_
#define _IOC_STRATEGY_H_

#include "IoC.h"
#include "IoCException.h"

class IoCStrategy
{

public:
	virtual void* Create(IObject const& args) throw(IoCException) = 0;
	virtual void* Create() throw(IoCException) = 0;
	virtual void addStrategy(string key, IObject const& args) = 0;
	virtual ~IoCStrategy() noexcept = 0;
};

#endif
