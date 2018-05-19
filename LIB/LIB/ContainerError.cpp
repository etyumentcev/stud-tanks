#include "ContainerError.h"

ContainerError::ContainerError(const std::string message) : message_(message)
{
	
}

std::string ContainerError::getMessage() const
{
	return message_;
}

