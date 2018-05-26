#include "IoC.h"

namespace IoC
{
	Container* Container::self_ = nullptr;


	Container* Container::instance()
	{
		if (!self_)
		{
			self_ = new Container;
		}
		return self_;
	}


	void ContainerDestroyer::initialize()
	{
		master_ = Container::instance();
	}

	
	ContainerDestroyer::~ContainerDestroyer()
	{
		delete master_;
		Container::self_ = nullptr;
	}
	void Container::add(std::string const& key, StrategyHandler* handler)
	{
		const auto iterator = self_->container_.find(key);
		if (iterator == self_->container_.end())
		{
			self_->container_.insert(std::pair<std::string, StrategyHandler*>(key, handler));
		}
		else
		{
			throw RegisterError("Already filled position", key);
		}
	}

	StrategyHandler* Container::resolve(std::string const& key) throw (ResolveError)
	{
		const auto iterator = self_->container_.find(key);
		if (iterator != self_->container_.end())
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
