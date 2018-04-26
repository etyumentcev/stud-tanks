#include "IoC.h"

IoC::IoC()
{
	std::map <std::string, Pointer<IoCStrategy>> c;
	catalog = c;
}

IoC::~IoC() noexcept
{
	catalog.clear();
}

void* IoC::resolve(std::string const& key, IObject const& args)
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
/*
void* IoC::resolve(std::string const& strategyKey, std::string const& objectKey)
{
	try
	{
		return catalog[strategyKey]->Create(objectKey);
	}
	catch (IoCException const &ex)
	{
		throw ex;
	}
}*/

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
