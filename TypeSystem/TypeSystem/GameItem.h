#ifndef _GAME_ITEM_H_
#define _GAME_ITEM_H_

#include "Object.h"

#include <map>
#include <string>
#include <memory>

using namespace std;

class GameItem
{
	map<string, unique_ptr<Object>> item;
public:
	GameItem(map<string, unique_ptr<Object>> _item);

	unique_ptr<Object> getValue(const string& key);
	void setValue(const string& key, unique_ptr<Object> newValue);
	virtual ~GameItem();
};

#endif
