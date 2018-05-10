#include "RegisterError.h"

RegisterError::RegisterError(std::string m, std::string k) : ContainerError(m)
{
	key = k;
}