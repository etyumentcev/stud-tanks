#ifndef _MOVE_H_
#define _MOVE_H_

#include "Command.h"
#include "IObj.h"


class Move: public Command
{
public:
	virtual void Action(Obj args[1]);
};


#endif

