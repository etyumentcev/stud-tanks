#ifndef _CONTAINERERROR_H_
#define _CONTAINERERROR_H_

#include <string>
#include <exception>


class ContainerError :public std::exception
{
	std::string message;
public:
	ContainerError(std::string m);
	std::string GetMessage();
};

#endif
