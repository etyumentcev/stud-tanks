#include "SpriteLoader.h"

SpritePainter SpriteLoader::load(std::ifstream &fin)
{
	std::vector <int> sprite;
	int buf = 0;
	while (!fin.eof())
	{
		fin >> buf;
		sprite.push_back(buf);
	}
	SpritePainter *painter = new SpritePainter(sprite);
	return *painter;
}