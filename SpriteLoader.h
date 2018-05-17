#ifndef _SPRITELOADER_H_
#define _SPRITELOADER_H_

#include <vector>
#include <iostream>
#include "SpritePainter.h"

class SpriteLoader
{
public: 
	SpritePainter load(std::ifstream &fin);
};

#endif
