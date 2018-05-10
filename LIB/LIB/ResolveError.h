#ifndef _RESOLVEERROR_H_
#define _RESOLVEERROR_H_

#include "ContainerError.h"

class ResolveError :public ContainerError
{
	std::string key;
public:
	ResolveError(std::string m, std::string key);
};

#endif
