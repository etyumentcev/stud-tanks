#ifndef _COMMAND_H_
#define _COMMAND_H_

class Command
{
	//ArrayObjects args;
public:
	//Command(ArrayObject &args);
	Command(Command const & other); /*спросить насчет конструктора копии у абстрактного класса...*/
	Command();
	virtual void Action() = 0;
};


#endif
