#include "SpritePainter.h"

void SpritePainter::Draw(std::vector<int> spriteVector, int size, int sprite, int x, int y)
{
	COORD coord;
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = x - 3;
	coord.Y = y - 3;
	SetConsoleCursorPosition(oh, coord);
	for (
		std::vector<int>::iterator it = spriteVector.begin() + ((sprite - 1)  * size * size);
		it != spriteVector.begin() + (sprite * size * size);
		++it
		)
	{
		for (int i = 0; i < 7; ++i)
		{
			std::cout << *it;
		}
		++coord.Y;
		SetConsoleCursorPosition(oh, coord);
	}
}

