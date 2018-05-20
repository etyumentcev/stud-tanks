#ifndef _STRATEGY_POINTER_H_
#define _STRATEGY_POINTER_H_

#include "Pointer.h"
#include "IoC.h"
#include "PointerCounterResourceMonitor.h"
#include "AlwaysDeleteResourceStrategy.h"

namespace IoC
{

	template<typename T> class PointerHandler : public StrategyHandler
	{
	public:
		virtual Pointer<T> resolve() = 0;

		virtual ~PointerHandler() noexcept = default;
	};

	template<typename T, typename T1> class PointerHandler1 : public StrategyHandler
	{
	public:
		virtual Pointer<T> resolve(T1) = 0;

		virtual ~PointerHandler1() noexcept = default;
	};

	template<typename T> class CreateNewPointer : public PointerHandler<T>
	{
	public:
		Pointer<T> resolve() override
		{
			return Pointer<T>(new PointerCounterResourceMonitor(new T(), new AlwaysDeleteResourceStrategy()));
		}

		virtual ~CreateNewPointer() noexcept = default;
	};

	template<typename T, typename T1> class CreateNewPointer1 : public PointerHandler1<T, T1>
	{
	public:
		Pointer<T> resolve(T1 arg) override
		{
			return Pointer<T>(new PointerCounterResourceMonitor(new T(arg), new AlwaysDeleteResourceStrategy()));
		}

		virtual ~CreateNewPointer1() noexcept = default;
	};

	template<typename T> Pointer<T> resolve(std::string const& key) throw (ResolveError)
	{
		PointerHandler<T>* strategy = dynamic_cast<PointerHandler<T>* >(Container::instance()->resolve(key));

		if (strategy != nullptr)
		{
			return strategy->resolve();
		}
		throw ResolveError("Strategy is null pointer.");
	}

	template<typename T, typename T1> Pointer<T> resolve(std::string const& key, T1 arg)
	{
		PointerHandler1<T, T1>* strategy = dynamic_cast<PointerHandler1<T, T1>* >(Container::instance()->resolve(key));

		if (strategy != nullptr)
		{
			return strategy->resolve(arg);
		}
		throw ResolveError("Strategy is null pointer.");
	}
}

#endif
