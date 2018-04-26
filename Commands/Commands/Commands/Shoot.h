#ifndef _SHOOT_H_
#define _SHOOT_H_

#include "Command.h"
#include "IObj.h"
#include <map>

typedef std::map <Obj, Obj> HashMap;

class Shoot : public Command
{
public:
	virtual void Action(Obj args[1], Obj args[2]);
};


#endif
