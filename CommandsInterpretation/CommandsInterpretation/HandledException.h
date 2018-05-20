#ifndef _HANDLED_EXCEPTION_H_
#define _HANDLED_EXCEPTION_H_

#include "ExceptionHandler.h"

class HandledException
{
public:
	virtual void handle(ExceptionHandler const& handler = [](){}) throw();

	virtual ~HandledException() noexcept = default;
};

#endif
