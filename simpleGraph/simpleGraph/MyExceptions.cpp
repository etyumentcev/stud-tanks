#include <exception>

class CreateMatrixError : public std::exception
{
public:
	char* const Reason() const
	{
		return "It's impossible to create game field";
	}
};