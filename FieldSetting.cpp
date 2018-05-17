#include "Figure.h"
//#include "DrawFirstCommandTank.h" 
//#include "DrawSecondCommandTank.h"
#include "SpritePainter.h"
#include "SpriteLoader.h"
#include <windows.h>
#include <fstream>
#include <iostream>

using namespace std;

int main() 
{
	//Figure *tank = new DrawFirstCommandTank(5, 5, 3);
	//Figure *enemyTank = new DrawSecondCommandTank(15, 15, 3);
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD maxWindow = GetLargestConsoleWindowSize(oh); // размер самого большого возможного консольного окна
	SMALL_RECT srctWindow = { 0, 0, maxWindow.X - 1, maxWindow.Y - 1};
	SMALL_RECT minWindow = { 0, 0, 0, 0 };
	SetConsoleWindowInfo(oh, true, &minWindow);
	SetConsoleScreenBufferSize(oh, maxWindow);
	SetConsoleWindowInfo(oh, true, &srctWindow);
	//ofstream fout("hello.txt");
	ifstream fin("SpritesOfFirstCommandTank.txt", ios_base::in);
	SpriteLoader *loader = new SpriteLoader();
	SpritePainter *painter = &loader->load(fin);
	painter->set_x(6);
	painter->set_y(6);
	painter->Draw(0);
	//tank->Draw();
	//enemyTank->Draw();
	getchar();
}

