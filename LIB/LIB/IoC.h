#ifndef _IOC_H_
#define _IOC_H_

#include <map>
#include "ContainerError.h"

namespace IoC
{

	class StrategyHandler
	{
	public:
		virtual ~StrategyHandler() noexcept = 0;
	};

	class ContainerDestroyer;

	class Container
	{
		std::map<std::string, StrategyHandler*> container;
		static Container* self;
		static ContainerDestroyer destroyer;
		friend class ContainerDestroyer;
	public:
		static Container* Instance();
		void Add(std::string const& key, StrategyHandler* handler);
		StrategyHandler* Resolve(std::string const& key) throw( ContainerError );
	};

	class ContainerDestroyer
	{
		Container* master;
	public:
		~ContainerDestroyer();
		void initialize(Container* m);
	};

	void Register(std::string const& key, StrategyHandler* strategy) throw(ContainerError);
}
#endif