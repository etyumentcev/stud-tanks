#ifndef _IOC_H_
#define _IOC_H_

#include <map>
#include <memory>

#include "IoCStrategy.h"

template<class T> class Key
{
public:
	static std::string ToString()
	{
		return "not_existed_key";
	}
};

class IoC
{

	std::map<std::string, std::unique_ptr<IoCStrategy>> catalog;

	void* resolve(std::string const& key, ArrayObjects const& args);

public:

	template<class T> std::unique_ptr<T> Resolve(Key<T>, ArrayObjects const& args)
	{
		void *result = resolve(Key<T>::Tostring());
		retrun std::unique_ptr<T>(reinterpret_cast<T*>(result));
	}

	template<class T> void Register(std::unique_ptr<IoCStrategy>  strategy)
	{
		catalog[Key<T>::ToString()] = stategy;
	}

	IoC();

	virtual ~IoC() noexcept;
};

#endif