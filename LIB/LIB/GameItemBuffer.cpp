#include "GameItemBuffer.h"

GameItemBuffer::GameItemBuffer() : buffer_(0)
{

}

GameItemBuffer::GameItemBuffer(const std::vector<Pointer<GameItem>> buffer) : buffer_(buffer)
{

}

Pointer<GameItem> GameItemBuffer::getPointerToGameItem(const size_t index)
{
	return buffer_.at(index);
}

void GameItemBuffer::addGameItem(const Pointer<GameItem> newGameItem)
{
	buffer_.push_back(newGameItem);
}

GameItemBuffer::~GameItemBuffer()
{

}
