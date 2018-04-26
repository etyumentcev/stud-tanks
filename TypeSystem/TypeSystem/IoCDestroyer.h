#ifndef _IOC_DESTROYER_H_
#define _IOC_DESTROYER_H_

#include "IoC.h"

class IoCDestroyer
{

	IoC* master;

public:

	void initialize(IoC* p);

	virtual ~IoCDestroyer();

};

#endif
