#ifndef _IOC_H_
#define _IOC_H_

#include <map>
#include "RegisterError.h"
#include "ResolveError.h"

namespace IoC
{

	class StrategyHandler
	{
	public:
		virtual ~StrategyHandler() noexcept {}
	};

	class ContainerDestroyer;

	class Container
	{
		~Container() noexcept {}
		static std::map<std::string, StrategyHandler*> container;
		static Container* self;
		static ContainerDestroyer destroyer;
		friend class ContainerDestroyer;
		void Add(std::string const& key, StrategyHandler* handler);
		friend  void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError);
	public:
		StrategyHandler* Resolve(std::string const& key) throw(ResolveError);
		static Container* Instance();
	};

	class ContainerDestroyer
	{
		Container* master;
	public:
		~ContainerDestroyer() noexcept;
		void initialize(Container* m);
	};

	void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError);
	
}

#endif
