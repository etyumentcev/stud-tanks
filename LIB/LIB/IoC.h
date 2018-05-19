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
		static std::map<std::string, StrategyHandler*> container_;
		static Container* self_;
		static ContainerDestroyer destroyer_;
		friend class ContainerDestroyer;
		static void add(std::string const& key, StrategyHandler* handler);
		friend  void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError);
	public:
		static StrategyHandler* resolve(std::string const& key) throw(ResolveError);
		static Container* instance();
	};

	class ContainerDestroyer
	{
		Container* master_ = nullptr;
	public:
		~ContainerDestroyer() noexcept;
		void initialize(Container* m);
	};

	void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError);
	
}

#endif
