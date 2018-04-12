#ifndef _ROTATE_H_
#define _ROTATE_H_

#include "Command.h"

class Rotate : public Command
{

	//ArrayObjects args;
public:
	Rotate(ArrayObjects args[1], ArrayObjects args[2]);
	Rotate(ArrayObjects _args) : Command(_args) {}
	Rotate(Rotate const & other);
	virtual void Action();
};


#endif
