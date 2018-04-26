#ifndef _IOC_STRATEGY_OBJECTS_
#define _IOC_STRATEGY_OBJECTS_

#include "IoCStrategy.h"
#include "Pointer.h"

#include <map>

class IoCStrategyObjects : public IoCStrategy
{
	map<std::string, IObject&> strategy;
public:
	IoCStrategyObjects();

	virtual void* Create(IObject const& args) throw(IoCException);
	virtual void* Create() throw(IoCException);
	virtual void addStrategy(string key, IObject const& args);
	virtual ~IoCStrategyObjects() noexcept;
};

#endif
