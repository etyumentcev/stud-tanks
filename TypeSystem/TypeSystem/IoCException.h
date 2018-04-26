#ifndef _IOC_EXCEPTION_H_
#define _IOC_EXCEPTION_H_

#include <exception>
#include <string>

using namespace std;

class IoCException : public exception
{

	string error;

public:

	IoCException(string _error);

};

#endif
