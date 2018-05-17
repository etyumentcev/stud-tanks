#include "IoC.h"

namespace IoC
{
	Container* Container::self = 0;
	ContainerDestroyer Container::destroyer;

	Container* Container::Instance()
	{
		if (!self)
		{
			self = new Container;
			destroyer.initialize(self);
		}
		return self;
	}


	void ContainerDestroyer::initialize(Container* m)
	{
		master = m;
	}

	ContainerDestroyer::~ContainerDestroyer()
	{
		delete master;
	}

	void Container::Add(std::string const& key, StrategyHandler* handler)
	{
		auto iterator = container.find(key);
		if (iterator == container.end())
		{
			container.insert(std::pair<std::string, StrategyHandler*>(key, handler));
		}
		else
		{
			throw RegisterError("Already filled position", key);
		}
	}

	StrategyHandler* Resolve(std::string const& key) throw (ResolveError)
	{
		auto iterator = Container::container.find(key);
		if (iterator != Container::container.end())
		{
			return iterator->second;
		}
		else
		{
			throw ResolveError("Wrong Key.", key);
		}
	}

	void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError)
	{
		try
		{
			Container::Instance()->Add(key, strategy);
		}
		catch (RegisterError const& ex)
		{
			throw ex;
		}
	}
};
