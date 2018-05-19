#ifndef _CONTAINER_ERROR_H_
#define _CONTAINER_ERROR_H_

#include <string>
#include <exception>


class ContainerError : public std::exception
{
	std::string message_;
public:
	explicit ContainerError(std::string m);

	std::string getMessage() const;
};

#endif
