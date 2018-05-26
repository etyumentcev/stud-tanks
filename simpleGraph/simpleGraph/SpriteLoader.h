#ifndef _SPRITELOADER_H_
#define _SPRITELOADER_H_

#include <vector>
#include <iostream>

class SpritesOfFirstCommandTank
{
	std::vector <int> spritesOfFirstCommandTanks; 
	int sprites;
	int size;
public: 
	SpritesOfFirstCommandTank(std::istream &fin);
};

#endif
