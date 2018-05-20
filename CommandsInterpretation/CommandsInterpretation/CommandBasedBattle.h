#ifndef _COMMAND_BASED_BATTLE_H_
#define _COMMAND_BASED_BATTLE_H_

#include "IBattle.h"
#include "IBattleCommandInvoker.h"

class CommandBasedBattle : public IBattle
{
	IBattleCommandInvoker& commandSource_;
public:
	explicit CommandBasedBattle(IBattleCommandInvoker& commandSource);

	void process() throw(BattleException) override;
};

#endif
