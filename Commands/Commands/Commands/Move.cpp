#include "Move.h"

Move::Move(ArrayObjects args[1], ArrayObjects args[2], ArrayObjects args[3], ArrayObjects args[4])
{
	x = args[1];
	y = args[2];
	vectorX = args[3];
	vectorY = args[4];
}

Move::Move(Move const & other)
{
	/*реализация конструктора копии*/
}

void Move::Action()
{
	x += vectorX;
	y += vectorY;
}