#ifndef _RESOLVE_ERROR_H_
#define _RESOLVE_ERROR_H_

#include "ContainerError.h"

class ResolveError :public ContainerError
{
	std::string key_;
public:
	ResolveError(std::string message, std::string key);
};

#endif
