#ifndef _PARSER_H_
#define _PARSER_H_

#include <map>
#include <fstream>
#include <iostream>

class Parser
{
	std::map<std::string, object> alphabet;
public:
	Parser(std::string filename);
	void addSymbol(std::string, object);
	objectArr Parse();
};

#endif