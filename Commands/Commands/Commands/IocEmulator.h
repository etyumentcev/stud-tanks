#ifndef _IOCEMULATOR_H_
#define _IOCEMULATOR_H_

#include <vector>
#include <map>
#include <String>;

class IOC
{
public:
	virtual void resolve() = 0;
};

#endif
