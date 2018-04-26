#include "Shoot.h"
#include "Resolver.h"

void Shoot::Action(Obj args[1], Obj args[2])
{
	/*спросить, где у нас находятся все мэпы чтобы создать оригинальный id*/
	args[2][0] = x;
	args[2][1] = y;
	Obj newArgs;
	newArgs[0] = "Move";
	newArgs[1] = args[2];
	newArgs[2] = x;
	newArgs[3] = y;
	Resolver *res = new Resolver;
	res->createAndUseCommand(newArgs);
	delete res;
}