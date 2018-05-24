#include "SpritesPainter.h"

SpritesPainter::SpritesPainter(int x, int y, std::vector <unsigned char> spriteVector)
{
	this->x = x;
	this->y = y;
	sprites = spriteVector;
}

void SpritesPainter::Draw(int numberOfSprites)
{
	int i = 2 + sprites[1] * sprites[1] * numberOfSprites;
	COORD coord;
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = x - 3;
	coord.Y = y - 3;
	SetConsoleCursorPosition(oh, coord);
	while (i != 2 + sprites[1] * sprites[1] * (numberOfSprites + 1))
	{
		for (int j = 0; j < sprites[1]; ++j)
		{
			for (int g = 0; g < sprites[1]; ++g)
			{
				std::cout << sprites[i];
				i++;
			}
			++coord.Y;
			SetConsoleCursorPosition(oh, coord);
		}
	}
}

void SpritesPainter::Set_x(int value)
{
	x = value;
}

void SpritesPainter::Set_y(int value)
{
	y = value;
}