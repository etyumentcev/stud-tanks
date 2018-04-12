#ifndef _IOCSTRATEGYLOAD_H_
#define _IOCSTRATEGYLOAD_H_
#include "IoCStrategy.h"
#include "Parser.h"


class IoCStrategyLoad :public IoCStrategy
{
	ArrayObjects<Command> CList;
public:
	IoCStrategyLoad();
	virtual ~IoCStrategyLoad() noexcept;

	virtual void* Create(ArrayObjects const& args);
};

#endif
