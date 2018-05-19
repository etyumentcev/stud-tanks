#include "RegisterError.h"

RegisterError::RegisterError(const std::string message, const std::string key) : ContainerError(message)
{
	key_ = key;
}