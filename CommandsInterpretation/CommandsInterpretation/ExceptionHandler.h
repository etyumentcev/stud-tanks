#ifndef _EXCEPTIONHANDLER_H_
#define _EXCEPTIONHANDLER_H_

#include <functional>

typedef std::function<void() throw()> ExceptionHandler;

#endif
