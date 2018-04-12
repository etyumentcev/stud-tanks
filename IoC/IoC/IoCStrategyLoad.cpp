#include"IoCStrategyLoad.h"

void* IoCStrategyLoad::Create(ArrayObjects const& args)
{
	Parser loader(args[0]);
	fillParser(loader);
	return loader.Parse;
}