#ifndef _SPRITESLOADER_H_ 
#define _SPRITESLOADER_H_

#include <fstream>
#include <vector>
#include "SpritesPainter.h"

class SpritesLoader
{
public:
	std::vector <unsigned char> load(std::ifstream &fin);
};

#endif 

