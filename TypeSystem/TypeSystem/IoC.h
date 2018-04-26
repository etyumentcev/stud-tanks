#ifndef _IOC_H_
#define _IOC_H_

#include "Key.h"
#include "Pointer.h"
#include "IoCStrategy.h"
#include "IoCDestroyer.h"

#include <map>

using namespace std;

class IoC
{
	map<string, Pointer<IoCStrategy>> catalog;

	IoC();

	friend class IoCDestroyer;

	static IoC* self;
	static IoCDestroyer destroyer;

	void* resolve(string const& key);
	void* resolve(string const& key, IObject const& args);

	virtual ~IoC() noexcept;

public:

	static IoC& getInstance();
	
	template<class T> Pointer<T> Resolve(Key<T> const& key, IObject const& args)
	{
		void *result = resolve(Key<T>::Tostring(), args);
		return Pointer<T>(reinterpret_cast<T*>(result));
	}

	template<class T> Pointer<T> Resolve(Key<T> const& key)
	{
		void *result = resolve(Key<T>::Tostring());
		return resolve(Key<T>::Tostring());
	}

	template<class T> void Register(Key<T> const& args, Pointer<IoCStrategy>  strategy)
	{
		catalog[Key<T>::ToString()] = strategy;
	}

	void Register(string key, Pointer<IoCStrategy>  strategy)
	{
		catalog[key] = strategy;
	}
	
};

#endif
