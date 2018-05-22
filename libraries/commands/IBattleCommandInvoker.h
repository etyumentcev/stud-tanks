#ifndef _IBATTLE_COMMAND_INVOKER_H_
#define _IBATTLE_COMMAND_INVOKER_H_

#include "BattleCommand.h"
#include "BattleCommandInvokerException.h"

class IBattleCommandInvoker
{
public:
	virtual BattleCommand& invoke() throw(BattleCommandInvokerException) = 0;

	virtual ~IBattleCommandInvoker() noexcept = default;
};

#endif
