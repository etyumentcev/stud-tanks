#ifndef _SPRITE_H_
#define _SPRITE_H_

#include <vector>
#include <iostream>
#include <windows.h>

class SpritePainter
{
public:
	void Draw(std::vector<int> spriteVector, int size, int sprite, int x, int y);
};

#endif
