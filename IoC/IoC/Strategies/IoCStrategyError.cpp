#include "IoCStrategyError.h"

void* IoCStrategyError::Create(ArrayObjects const& args) throw (IoCException)
{
	throw IoCException("Dependency isn't registrated.");
}