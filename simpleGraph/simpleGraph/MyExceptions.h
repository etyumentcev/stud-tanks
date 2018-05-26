#ifndef _MYEXCEPTIONS_H_
#define _MYEXCEPTIONS_H_

#include <exception>

class OpenFileError : public std::exception
{
public:
	char* const Reason() const;
};

#endif