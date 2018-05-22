#ifndef _REGISTER_ERROR_H_
#define _REGISTER_ERROR_H_

#include "ContainerError.h"

class RegisterError :public ContainerError
{
	std::string key_;
public:
	RegisterError(std::string message, std::string key);
};

#endif
