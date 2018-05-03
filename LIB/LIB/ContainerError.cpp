#include "ContainerError.h"

ContainerError::ContainerError(std::string m)
{
	message = m;
}

std::string ContainerError::GetMessage()
{
	return message;
}