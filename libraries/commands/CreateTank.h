#ifndef _CREATE_TANK_
#define _CREATE_TANK_

#include "IBattleCommandInvoker.h"
#include "../data/GameItemBuffer.h"

class CreateTank : public IBattleCommandInvoker
{
	IObject& argsArray_;
public:
	explicit CreateTank(IObject& argsArray);

	BattleCommand& invoke() throw(BattleCommandInvokerException) override;
};

#endif
