#ifndef _IBATTLE_H_
#define _IBATTLE_H_

#include "BattleException.h"

class IBattle
{
public:
	virtual void process() throw(BattleException) = 0;

	virtual ~IBattle() noexcept = default;
};

#endif
