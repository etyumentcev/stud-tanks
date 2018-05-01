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
		container.insert(std::pair<std::string, StrategyHandler*>(key, handler));
	}

}