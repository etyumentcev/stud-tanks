#ifndef _BATTLE_COMMAND_INVOKER_H_
#define _BATTLE_COMMAND_INVOKER_H_

#include "IBattleCommandInvoker.h"

class BattleCommandInvoker : public IBattleCommandInvoker
{
	BattleCommand& command;
public:
	BattleCommandInvoker(BattleCommand& _command);

	virtual BattleCommand& invoke() throw(BattleCommandInvokerException);
};

#endif
