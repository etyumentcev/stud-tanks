#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
	virtual ~Strategy() {}
	virtual void use() = 0;
};
#endif
