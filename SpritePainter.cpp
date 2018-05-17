#include "SpritePainter.h"

SpritePainter::SpritePainter(std::vector <int> sprite)
{
	sprites = sprite;
}

void SpritePainter::Draw(int numberOfSprite)
{
	COORD coord;
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = x - 3;
	coord.Y = y - 3;
	SetConsoleCursorPosition(oh, coord);
	for (int i=2+numberOfSprite*sprites[1]*sprites[1]; i < 2+(numberOfSprite+1)*sprites[1]*sprites[1]+1; ++i)
	{
		for (int i = 0; i < sprites[1]+1; ++i)
		{
			std::cout << (char)sprites[i];
		}
		++coord.Y;
		SetConsoleCursorPosition(oh, coord);
	}
}

void SpritePainter::set_x(int value)
{
	x = value;
}

void SpritePainter::set_y(int value)
{
	y = value;
}
