#ifndef _ROTATE_H_
#define _ROTATE_H_

#include "Command.h"
#include "IObj.h"

class Rotate : public Command
{
public:
	virtual void Action(Obj args[1]);
};


#endif
