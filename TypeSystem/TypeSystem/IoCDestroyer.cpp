#include "IoCDestroyer.h"

IoC& IoC::getInstance()
{
	if (!self)
	{
		self = new IoC();
		destroyer.initialize(self);
	}
	return *self;
}

void IoCDestroyer::initialize(IoC* m)
{
	master = m;
}


IoCDestroyer::~IoCDestroyer()
{
	delete master;
}
