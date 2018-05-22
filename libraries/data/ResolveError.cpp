#include "ResolveError.h"

ResolveError::ResolveError(const std::string message, const std::string key) : ContainerError(message)
{
	key_ = key;
}

ResolveError::ResolveError(const std::string message) : ContainerError(message)
{
	
}