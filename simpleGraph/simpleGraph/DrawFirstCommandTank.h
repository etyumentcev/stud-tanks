#ifndef _DRAWFIRSTCOMMANDTANK_H_
#define _DRAWFIRSTCOMMANDTANK_H_

#include "Figure.h"
#include <windows.h>
#include <iostream>

using namespace std;



class DrawFirstCommandTank :public Figure
{
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	int x;
	int y;
	COORD coord;
	public:
		DrawFirstCommandTank(int x1, int y1)
		{
			x = x1;
			y = y1;
		}
		virtual void Draw()
		{
			coord.X = x - 1;
			coord.Y = y - 1;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)218;
			cout << (char)196;
			cout << (char)191;
			coord.X = x - 1;
			coord.Y = y;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			cout << " ";
			cout << (char)179;
			coord.X = x - 1;
			coord.Y = y + 1;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)192;
			cout << (char)194;
			cout << (char)217;
			coord.X = x;
			coord.Y = y + 2;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x - 3;
			coord.Y = x - 3;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)218;
			cout << (char)196;
			cout << (char)196;
			cout << (char)196;
			cout << (char)196;
			cout << (char)196;
			cout << (char)191;
			coord.X = x - 3;
			coord.Y = y - 2;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x + 3;
			coord.Y = y - 2;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x - 3;
			coord.Y = y - 1;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x + 3;
			coord.Y = y - 1;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x - 3;
			coord.Y = y;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x + 3;
			coord.Y = y;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x - 3;
			coord.Y = y + 1;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x + 3;
			coord.Y = y + 1;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x - 3;
			coord.Y = y + 2;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x + 3;
			coord.Y = y + 2;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)179;
			coord.X = x - 3;
			coord.Y = y + 3;
			SetConsoleCursorPosition(oh, coord);
			cout << (char)192;
			cout << (char)196;
			cout << (char)196;
			cout << (char)196;
			cout << (char)196;
			cout << (char)196;
			cout << (char)217;
		}
};

#endif
