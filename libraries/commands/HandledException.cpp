#include "HandledException.h"

void HandledException::handle(ExceptionHandler const& handler) throw()
{
	handler();
}
