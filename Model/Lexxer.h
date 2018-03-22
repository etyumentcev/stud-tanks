#ifndef _LEXXER_H_
#define _LEXXER_H_
#include <list>
#include "Command.h"
#include "Word.h"

class Lexxer
{
	std::list<Word&>* catalog;
public:
	~Lexxer();
	Lexxer();
	Command* parse(char*);
};




#endif

