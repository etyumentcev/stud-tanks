#include "Lexxer.h"

Lexxer::~Lexxer()
{
	delete this->catalog;
}

Lexxer::Lexxer()
{
	this->catalog = new std::list<Word&>;
	//this->catalog.push_back(WTurn());
}

Command* Lexxer::parse(char*  line)
{
	int x = 0;
	int y = 0;
	size_t i = 0;
	while (line[i] != ' ')
	{
		x = x * 10 + line[i];
		++i;
	}
	while (line[i] != ' ')
	{
		y = y * 10 + line[i];
		++i;
	}
	std::list<Word*> com;
	while (line[i] != '/0')
	{
		size_t start = i;
		size_t length = 0;
		while (line[i] != ' ')
		{
			length++;
			i++;
		}
		size_t g = 0;
		char* w = new char[length];
		for (size_t j = start; j < start + length; j++,g++ )
		{
			w[g] = line[j];
		}
		Word* c;
		for (std::list<Word&>::iterator it = catalog->begin(); it != catalog->end(); it++)
		{

				c = *it->check(w);
		}
		com.push_back(c);
	}
	//return Command(x, y, com);
}