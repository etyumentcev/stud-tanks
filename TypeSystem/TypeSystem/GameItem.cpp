#include "GameItem.h"

GameItem::GameItem(map<string, unique_ptr<Object>> _item) : item(move(_item))
{

}

unique_ptr<Object> GameItem::getValue(const string& key) throw (out_of_range)
{
	try
	{
		return move(item.at(key));
	}
	catch(out_of_range& ex)
	{
		throw ex;
	}
}

void GameItem::setValue(const string& key, unique_ptr<Object> newValue) throw (out_of_range)
{
	try
	{
		item.at(key);
	}
	catch (out_of_range& ex)
	{
		throw ex;
	}
	(item.at(key)).reset(newValue.get());
}

GameItem::~GameItem()
{
	item.~map();
}
