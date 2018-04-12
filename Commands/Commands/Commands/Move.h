#ifndef _MOVE_H_
#define _MOVE_H_

#include "Command.h"

class Move: public Command
{
	int x;
	int y;
	int vectorX;
	int vectorY;
public:
	Move(ArrayObjects args[1],ArrayObjects args[2],ArrayObjects args[3],ArrayObjects args[4]);
	//Move(ArrayObjects _args) : Command(_args) {}
	Move(Move const &other);
	virtual void Action();
};


#endif

