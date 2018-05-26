#include "SpriteLoader.h"

SpritesOfFirstCommandTank::SpritesOfFirstCommandTank(std::istream &fin) 
{
	int buf=0;
	fin >> buf;
	sprites = buf;
	fin >> buf;
	size = buf;
	while (!fin.eof())
	{
		fin >> buf;
		spritesOfFirstCommandTanks.push_back(buf);
	}
}