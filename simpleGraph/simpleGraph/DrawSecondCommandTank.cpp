#include "Figure.h"
#include <windows.h>
#include <iostream>
#include "DrawSecondCommandTank.h"

using namespace std;

DrawSecondCommandTank::DrawSecondCommandTank
(
	int x1, 
	int y1, 
	int direction1
)
{
	x = x1;
	y = y1;
	direction = direction1;
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
