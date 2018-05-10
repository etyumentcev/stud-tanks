#include "Figure.h"
#include <windows.h>
#include <iostream>
#include "DrawSecondCommandTank.h"

using namespace std;

DrawSecondCommandTank::DrawSecondCommandTank
(
	int x, 
	int y, 
	int direction
)
{
	this->x = x;
	this->y = y;
	this->direction = direction;
}

void DrawSecondCommandTank::Draw()
{
	COORD coord;
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = x - 3;
	coord.Y = y - 3;
	SetConsoleCursorPosition(oh, coord);
	for (int i = 0; i < 7; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			cout << spriteOfSecondCommandTank[direction][i][j];
		}
		++coord.Y;
		SetConsoleCursorPosition(oh, coord);
	}
}
