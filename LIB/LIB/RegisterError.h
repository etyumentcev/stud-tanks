#ifndef _REGISTERERROR_H_
#define _REGISTERERROR_H_

#include "ContainerError.h"

class RegisterError :public ContainerError
{
	std::string key;
public:
	RegisterError(std::string m, std::string k);
};

#endif
