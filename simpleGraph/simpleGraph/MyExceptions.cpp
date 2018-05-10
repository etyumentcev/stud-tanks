#include <exception>

class OpenFileError : public std::exception
{
public:
	char* const Reason() const
	{
		return "File wasn't open";
	}
};