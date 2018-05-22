#ifndef _GAME_ITEM_BUFFER_H_
#define _GAME_ITEM_BUFFER_H_

#include <vector>

#include "GameItem.h"
#include "Pointer.h"

class GameItemBuffer
{
	std::vector<Pointer<GameItem>> buffer_;
public:
	explicit GameItemBuffer();
	explicit GameItemBuffer(std::vector<Pointer<GameItem>> buffer);

	Pointer<GameItem> getPointerToGameItem(size_t index);
	void addGameItem(Pointer<GameItem> newGameItem);

	virtual ~GameItemBuffer();
};

#endif
