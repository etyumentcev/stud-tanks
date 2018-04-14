#ifndef _IOCEXCEPTION_H_
#define _IOCEXCEPTION_H_

#include <iostream>
#include <exception>

class IoCException: public std::exception
{
	std::string error;
public:
	IoCException(std::string _error);
};

#endif
