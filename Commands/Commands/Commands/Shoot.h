#ifndef _SHOOT_H_
#define _SHOOT_H_

#include "Command.h"
#include <map>

typedef std::map <String, String> HashMap;

class Shoot : public Command
{
public:
	virtual void Action(/*массив*/);
};


#endif
