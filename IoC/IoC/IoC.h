#ifndef _IOC_H_
#define _IOC_H_

#include <map>
#include <memory>

#include ".\Strategies\IoCStrategy.h"

template<class T> class Key
{
public:
	static std::string ToString()
	{
		return "Nonexisting key";
	}
};

class IoC
{

	std::map<std::string, Ptr<IoCStrategy>> catalog;

	void* resolve(std::string const& key, ArrayObjects const& args);

public:

	template<class T> std::Ptr<T> Resolve(Key<T>, ArrayObjects const& args)
	{
		void *result = resolve(Key<T>::Tostring());
		retrun Ptr<T>(reinterpret_cast<T*>(result));
	}

	void Register(Ptr<IoCStrategy>  strategy)
	{
			catalog[Key<T>::ToString()] = stategy;
	}

	IoC();

	virtual ~IoC() noexcept;
};

#endif