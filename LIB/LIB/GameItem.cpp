#include "GameItem.h"

GameItem::GameItem(const std::map<std::string, Pointer<IObject>> item) : item_(item)
{

}

Pointer<IObject> GameItem::getValue(const std::string& key) throw (std::out_of_range)
{
	try
	{
		return std::move(item_.at(key));
	}
	catch(std::out_of_range& ex)
	{
		throw ex;
	}
}

void GameItem::setValue(const std::string& key, const Pointer<IObject> newValue) throw (std::out_of_range)
{
	try
	{
		item_.at(key) = newValue;
	}
	catch (std::out_of_range& ex)
	{
		throw ex;
	}
}

GameItem::~GameItem()
{

}
