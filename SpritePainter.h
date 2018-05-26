#ifndef _SPRITEPAINTER_H_
#define _SPRITEPAINTER_H_

#include <vector>
#include <iostream>
#include <windows.h>
#include <fstream>

class SpritePainter
{
	std::vector <int> sprites;
	int x;
	int y;
public:
	SpritePainter(std::vector <int> sprite);
	void Draw(int numberOfSprite);
	void set_x(int value);
	void set_y(int value);
};

#endif
