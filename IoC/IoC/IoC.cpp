#include "IoC.h"

IoC::IoC()
{
	std::map <std::string, std::unique_ptr<IoCStrategy> > c;
	catalog = c;
}

IoC::~IoC() noexcept
{
	catalog.clear();
}

void* IoC::resolve(std::string const& key, ArrayObjects const& args)
{
	return catalog[key]->Create(args);
}

