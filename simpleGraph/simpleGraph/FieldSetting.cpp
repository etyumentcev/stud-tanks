#include <windows.h>
#include <iostream>
#include <WinUser.h>
#include <conio.h>

using namespace std;

int main() 
{
	/*HANDLE out_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD maxWindow = GetLargestConsoleWindowSize(out_handle); // размер самого большого возможного консольного окна
	SMALL_RECT srctWindow = { 0, 0, maxWindow.X - 1, maxWindow.Y - 1};
	SMALL_RECT minWindow = { 0, 0, 0, 0 };
	SetConsoleWindowInfo(out_handle, true, &minWindow);
	SetConsoleScreenBufferSize(out_handle, maxWindow);
	SetConsoleWindowInfo(out_handle, true, &srctWindow);
	getchar();
	return 0;*/
}

