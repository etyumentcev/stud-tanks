#ifndef __POINTERSTRATEGY_H_
#define _POINTERSTRATEGY_H_

#include "Pointer.h"
#include "IoC.h"
#include "PointerCounterResourceMonitor.h"
#include "AlwaysDeleteResourceStrategy.h"

namespace IoC
{

	template<typename T> class PointerHandler : public StrategyHandler
	{
	public:
		virtual Pointer<T> Resolve() = 0;
		virtual ~PointerHandler()
		{
		}
	};

	template<typename T> class CreateNewPointer : public PointerHandler<T>
	{
	public:
		virtual Pointer<T> Resolve()
		{
			return Pointer<T>(new PointerCounterResourceMonitor(new T(), new AlwaysDeleteResourceStrategy()));
		}
		virtual ~CreateNewPointer()
		{
		}
	};

	template<typename T> Pointer<T> Resolve(std::string const& key)
	{
		PointerHandler<T>* strategy = dynamic_cast<PointerHandler<T>>(Container::Instance()->Resolve(key));

		return strategy->Resolve();
	}
}
#endif