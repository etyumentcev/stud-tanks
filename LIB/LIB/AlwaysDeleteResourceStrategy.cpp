#include "AlwaysDeleteResourceStrategy.h"

AlwaysDeleteResourceStrategy::AlwaysDeleteResourceStrategy()
{

} 

void AlwaysDeleteResourceStrategy::apply(void* resource) throw() 
{ 
	delete resource; 
}

AlwaysDeleteResourceStrategy::~AlwaysDeleteResourceStrategy()
{

} 
