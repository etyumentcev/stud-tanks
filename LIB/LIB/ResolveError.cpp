#include "ResolveError.h"

ResolveError::ResolveError(std::string m, std::string k) : ContainerError(m)
{
	key = k;
}