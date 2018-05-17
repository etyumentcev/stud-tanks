#include "GameItem.h"

using namespace std;

GameItem::GameItem(map<string, unique_ptr<IObject>> _item) : item(move(_item))
{

}

unique_ptr<IObject> GameItem::getValue(const string& key) throw (out_of_range)
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

void GameItem::setValue(const string& key, unique_ptr<IObject> newValue) throw (out_of_range)
{
	try
	{
		(item.at(key)).reset(newValue.get());
	}
	catch (out_of_range& ex)
	{
		throw ex;
	}
}

GameItem::~GameItem()
{
	item.~map();
}
