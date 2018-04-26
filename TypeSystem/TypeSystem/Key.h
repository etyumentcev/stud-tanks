#ifndef _KEY_H_
#define _KEY_H_

#include "IObject.h"

template<class T> class Key
{
public:
	static string ToString()
	{
		return "Nonexisting key";
	}
};

 template<> class Key<IObject>
{
public:
	static string ToString()
		{
			return "Object";
		}
};

#endif
