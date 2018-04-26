#ifndef _COMMAND_H_
#define _COMMAND_H_

/*template<> class Key<Command>
{
public:
	static std::string ToString()
	{
		return "Command"
	}
};*/


class Command
{
public:
	virtual void Action() = 0;
};


#endif
