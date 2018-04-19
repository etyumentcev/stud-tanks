#include "Shoot.h"
#include "Resolver.h"

void Shoot::Action(/*массив*/)
{
	/*спросить, где у нас находятся все мэпы чтобы создать оригинальный id*/
	HashMap unicMapID;
	unicMapID["x"] = /*id танка*/["x"];
	unicMapID["y"] = /*id танка*/["y"];
	ArrayOfObject args;
	args["0"] = "Move";
	args[/*...*/] = /*id снаряда*/;
	args[/*...*/] = x/*перемещение*/;
	args[/*...*/] = y/*перемещение*/;
	Resolver *res = new Resolver;
	res->createAndUseCommand(args);
	delete res;
}