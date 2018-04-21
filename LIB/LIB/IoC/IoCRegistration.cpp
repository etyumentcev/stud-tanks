#include "IoCRegistration.h"

void RegistrateIoC(IoC &i)
{
	i.Register(Ptr<IoCStrategyCommand()>, "Command");
	i.Register(Ptr<IoCStrategyError>, "Nonexisting key")
	//...
}