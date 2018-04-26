#include "IoC.h"

IoC& IoC::getInstance()
{
	if (!self)
	{
		self = new IoC();
		destroyer.initialize(self);
	}
	return *self;
}

IoC::~IoC() noexcept
{
	catalog.clear();
}

void* IoC::resolve(std::string const& key, Object const& args)
{
	try
	{
		return catalog[key]->Create(args);
	}
	catch (IoCException const &ex)
	{
		throw ex;
	}
}

void* IoC::resolve(std::string const& key)
{
	try
	{
		return catalog[key]->Create();
	}
	catch (IoCException const &ex)
	{
		throw ex;
	}
}

void IoCDestroyer::initialize(IoC* m)
{
	master = m;
}


IoCDestroyer::~IoCDestroyer()
{
	delete master;
}
