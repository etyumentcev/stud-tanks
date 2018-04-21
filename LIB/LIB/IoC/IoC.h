#ifndef _IOC_H_
#define _IOC_H_

#include <map>

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

	std::map<std::string, Pointer<IoCStrategy>> catalog;
	void* resolve(std::string const& key);
	void* resolve(std::string const& key, IObject const& args);

public:

	template<class T> Pointer<T> Resolve(Key<T> const& key, IObject const& args)
	{
		void *result = resolve(Key<T>::Tostring(), args);
		retrun Pointer<T>(reinterpret_cast<T*>(result));
	}
	template<class T> Pointer<T> Resolve(Key<T> const& key)
	{
		void *result = resolve(Key<T>::Tostring());
		retrun Pointer<T>(reinterpret_cast<T*>(result));
	}

	template<class T> void Register(Key<T> const& key, Pointer<IoCStrategy>  strategy)
	{
		catalog[key::ToString()] = strategy;
	}


	IoC();

	virtual ~IoC() noexcept;
};

#endif