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

	StrategyHandler* Container::Resolve(std::string const& key) throw(ContainerError)
	{
		auto iterator = container.find(key);
		if (iterator != container.end())
		{
			return iterator->second;
		}
		else
		{
			throw ContainerError("Wrong Key.");
		}
	}
	
	void Register(std::string const& key, StrategyHandler* strategy) throw(ContainerError)
	{
		Container::Instance()->Add(key, strategy);
	}
};
<<<<<<< HEAD







=======
>>>>>>> 5352c24623ff2cabd883deb3983aa121ff6f3698
