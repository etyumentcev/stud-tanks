#include "IoC.h"

IoC::IoC()
{
	std::map <std::string, Ptr<IoCStrategy>> c;
	catalog = c;
}

IoC::~IoC() noexcept
{
	catalog.clear();
}

void* IoC::resolve(std::string const& key, ArrayObjects const& args)
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

