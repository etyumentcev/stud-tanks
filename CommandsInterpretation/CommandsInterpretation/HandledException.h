#ifndef _HANDLEDEXCEPTION_H_
#define _HANDLEDEXCEPTION_H_

#include "ExceptionHandler.h"

class HandledException
{
public:
	virtual void handle(ExceptionHandler const& handler = []() {}) throw();
};

#endif
