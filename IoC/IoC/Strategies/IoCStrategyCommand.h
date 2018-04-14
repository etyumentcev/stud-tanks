#ifndef _IOCSTRATEGYCOMMAND_H_
#define _IOCSTRATEGYCOMMAND_H_
#include "IoCStrategy.h"


class IoCStrategyCommand :public IoCStrategy
{
	Resolver resolver;
public:
	IoCStrategyCommand();
	virtual ~IoCStrategyCommand() noexcept;
	virtual void* Create(ArrayObjects const& args);

};

#endif
