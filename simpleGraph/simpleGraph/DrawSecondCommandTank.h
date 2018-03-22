#ifndef _DRAWSECONDCOMMANDTANK_H_
#define _DRAWSECONDCOMMANDTANK_H_

#include "Figure.h"
#include <windows.h>
#include <iostream>

using namespace std;



class DrawSecondCommandTank :public Figure
{
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	int x;
	int y;
	COORD coord;
public:
	DrawSecondCommandTank(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	virtual void Draw()
	{
		coord.X = x - 1;
		coord.Y = y - 1;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)201;
		cout << (char)205;
		cout << (char)187;
		coord.X = x - 1;
		coord.Y = y;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		cout << " ";
		cout << (char)186;
		coord.X = x - 1;
		coord.Y = y + 1;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)200;
		cout << (char)203;
		cout << (char)188;
		coord.X = x;
		coord.Y = y + 2;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x - 3;
		coord.Y = x - 3;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)201;
		cout << (char)205;
		cout << (char)205;
		cout << (char)205;
		cout << (char)205;
		cout << (char)205;
		cout << (char)187;
		coord.X = x - 3;
		coord.Y = y - 2;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x + 3;
		coord.Y = y - 2;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x - 3;
		coord.Y = y - 1;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x + 3;
		coord.Y = y - 1;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x - 3;
		coord.Y = y;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x + 3;
		coord.Y = y;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x - 3;
		coord.Y = y + 1;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x + 3;
		coord.Y = y + 1;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x - 3;
		coord.Y = y + 2;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x + 3;
		coord.Y = y + 2;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)186;
		coord.X = x - 3;
		coord.Y = y + 3;
		SetConsoleCursorPosition(oh, coord);
		cout << (char)200;
		cout << (char)205;
		cout << (char)205;
		cout << (char)205;
		cout << (char)205;
		cout << (char)205;
		cout << (char)188;
	}
};

#endif

