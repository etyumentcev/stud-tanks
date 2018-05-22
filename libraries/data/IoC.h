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
		virtual ~StrategyHandler() noexcept = default;
	};

	class ContainerDestroyer;

	class Container
	{
		static std::map<std::string, StrategyHandler*> container_;
		static Container* self_;
		static ContainerDestroyer destroyer_;

		static void add(std::string const& key, StrategyHandler* handler);

		friend class ContainerDestroyer;

		friend void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError);

		virtual ~Container() noexcept = default;
	public:
		static StrategyHandler* resolve(std::string const& key) throw(ResolveError);
		static Container* instance();
	};

	class ContainerDestroyer
	{
		Container* master_ = nullptr;
	public:
		void initialize(Container* master);

		virtual ~ContainerDestroyer() noexcept;
	};

	void Register(std::string const& key, StrategyHandler* strategy) throw(RegisterError);
}

#endif
