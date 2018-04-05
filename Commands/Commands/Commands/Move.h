#ifndef _MOVE_H_
#define _MOVE_H_

#include "Command.h"

class Move: public Command
{
	//ArrayObjects args;
public:
	Move(ArrayObjects _args) : Command(_args) {}
	Move(Move const & other);
	virtual void Action();
};


#endif

