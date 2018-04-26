#include "IoCStrategyObjects.h"

IoCStrategyObjects::IoCStrategyObjects()
{
}

void* IoCStrategyObjects::Create(IObject const& args)
{
	void *result = &strategy[Key<IObject>::ToString(args)];
	return &Pointer<IObject>(reinterpret_cast<IObject*>(result));
	
}

void* IoCStrategyObjects::Create() throw (IoCException)
{
	
}

void IoCStrategyObjects::addStrategy(string key, IObject const& args)
{
	strategy[key] = args;
}

IoCStrategyObjects::~IoCStrategyObjects()
{
}
