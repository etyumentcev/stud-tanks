#include "AlwaysDeleteResourceStrategy.h"

#include <stdexcept>

void AlwaysDeleteResourceStrategy::apply(void* resource) throw() 
{
	delete resource;
}
