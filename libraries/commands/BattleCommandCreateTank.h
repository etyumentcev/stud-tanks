#ifndef _CREATE_TANK_
#define _CREATE_TANK_

#include "IBattleCommandInvoker.h"
#include "../data/ObjectBuffer.h"
#include "../data/Pointer.h"

class CreateTank : public IBattleCommandInvoker
{
	Pointer<IObject> argsArray_;
public:
	explicit CreateTank(Pointer<IObject> argsArray);

	BattleCommand& invoke() throw(BattleCommandInvokerException) override;
};

#endif
