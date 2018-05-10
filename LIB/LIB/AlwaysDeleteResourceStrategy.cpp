#include "AlwaysDeleteResourceStrategy.h"

void AlwaysDeleteResourceStrategy::apply(void* resource) throw() 
{ 
	delete resource; 
}

AlwaysDeleteResourceStrategy::~AlwaysDeleteResourceStrategy() throw() 
{

} 
