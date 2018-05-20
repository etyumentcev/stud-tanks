#include "IoC.h"

namespace IoC
{
	Container* Container::self_ = nullptr;
	ContainerDestroyer Container::destroyer_;
	std::map<std::string, StrategyHandler*> Container::container_;

	Container* Container::instance()
	{
		if (!self_)
		{
			self_ = new Container;
			destroyer_.initialize(self_);
		}
		return self_;
	}


	void ContainerDestroyer::initialize(Container* master)
	{
		master_ = master;
	}

	ContainerDestroyer::~ContainerDestroyer()
	{
		delete master_;
	}

	void Container::add(std::string const& key, StrategyHandler* handler)
	{
		const auto iterator = container_.find(key);
		if (iterator == container_.end())
		{
			container_.insert(std::pair<std::string, StrategyHandler*>(key, handler));
		}
		else
		{
			throw RegisterError("Already filled position", key);
		}
	}

	StrategyHandler* Container::resolve(std::string const& key) throw (ResolveError)
	{
		const auto iterator = container_.find(key);
		if (iterator != container_.end())
		{
			return iterator->second;
		}
		throw ResolveError("Wrong Key.", key);
	}

	void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError)
	{
		try
		{
			Container::instance()->add(key, strategy);
		}
		catch (RegisterError const&)
		{
			throw;
		}
	}
}
