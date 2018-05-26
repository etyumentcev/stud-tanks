#include "SpritesLoader.h"

std::vector <unsigned char> SpritesLoader::load(std::ifstream &fin)
{
	std::vector <unsigned char> vector;
	int buf = 0;
	while (!fin.eof())
	{
		fin >> buf;
		vector.push_back(buf);
	}
	return vector;
}