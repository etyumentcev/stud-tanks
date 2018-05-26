#include "SpritesLoader.h"
#include "SpritesPainter.h"
#include <fstream>
#include <iostream>
#include <windows.h>

int main()
{
	HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD maxWindow = GetLargestConsoleWindowSize(oh); // размер самого большого возможного консольного окна
	SMALL_RECT srctWindow = { 0, 0, maxWindow.X - 1, maxWindow.Y - 1 };
	SMALL_RECT minWindow = { 0, 0, 0, 0 };
	SetConsoleWindowInfo(oh, true, &minWindow);
	SetConsoleScreenBufferSize(oh, maxWindow);
	SetConsoleWindowInfo(oh, true, &srctWindow);

	std::ifstream fin("TankSprite.txt", std::ios_base::in);
	SpritesLoader *loader = new SpritesLoader();
	SpritesPainter *painter = new SpritesPainter(10, 10, loader->load(fin));
	painter->Draw(3);

	getchar();
}