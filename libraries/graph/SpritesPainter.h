#ifndef _SPRITESPAINTER_H_
#define _SPRITESPAINTER_H_

#include <fstream>
#include <iostream>
#include <vector>
#include <windows.h>

class SpritesPainter
{
	int x;
	int y;
	std::vector <unsigned char> sprites;
public:
	SpritesPainter(int x, int y, std::vector <unsigned char> spriteVector);
	void Draw(int numberOfSprite);
	void Set_x(int value);
	void Set_y(int value);
};

#endif 
