#ifndef _STRATEGIES_H_
#define _STRATEGIES_H_

#include "Strategy.h"

class Shoot:public Strategy
{
public:
	virtual ~Shoot();
};

class Turn :public Strategy
{
public:
	virtual ~Turn();
	void use();
};

class Move :public Strategy
{
public:
	virtual ~Move();
	void use();
};
#endif
