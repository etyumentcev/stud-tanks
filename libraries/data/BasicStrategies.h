#ifndef __POINTERSTRATEGY_H_
#define _POINTERSTRATEGY_H_

#include "Pointer.h"
#include "IoC.h"

namespace IoC
{
	//No arguements

	template<typename T> class Handler_0Args : public StrategyHandler
	{
	public:
		virtual Pointer<T> Resolve() = 0;
		virtual ~Handler_0Args(){}
	};

	template<typename T> class CreateNew_0Args : public Handler_0Args<T>
	{
	public:
		virtual Pointer<T> Resolve()
		{
			return Pointer<T>(new PointerCounterResourceMonitor(new T(), new AlwaysDeleteResourceStrategy()));
		}
		virtual ~CreateNew_0Args(){}
	};

	template<typename T> Pointer<T> Resolve(std::string const& key)
	{
		Handler_0Args<T>* strategy = dynamic_cast<Handler_0Args<T>>(Container::Instance()->Resolve(key));

		return strategy->Resolve();
	}

	//1 Argument

	template<typename T, typename T1> class Handler_1Args : public StrategyHandler
	{
	public:
		virtual Pointer<T> Resolve(T1 arg) = 0;
		virtual ~Handler_1Args() {}
	};

	template<typename T, typename T1> class CreateNew_1Args : public Handler_1Args<T, T1>
	{
	public:
		virtual Pointer<T> Resolve(T1 arg)
		{
			return Pointer<T>(new PointerCounterResourceMonitor(new T(arg), new AlwaysDeleteResourceStrategy()));
		}
		virtual ~CreateNew_1Args() {}
	};

	template<typename T, typename T1> Pointer<T> Resolve(std::string const& key,T1 arg)
	{
		Handler_1Args<T,T1>* strategy = dynamic_cast<Handler_1Args<T, T1>* >(Container::Instance()->Resolve(key));

		return strategy->Resolve(arg);
	}

	//2 arguments


}
#endif