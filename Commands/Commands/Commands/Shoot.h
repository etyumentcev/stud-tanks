#ifndef _SHOOT_H_
#define _SHOOT_H_

#include "Command.h"

class Shoot : public Command
{
	//ArrayObjects args;
public:
	Shoot(ArrayObjects _args) : Command(_args) {}
	Shoot(Shoot const & other);
	virtual void Action();
};


#endif
