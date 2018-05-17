#ifndef _GAME_ITEM_H_
#define _GAME_ITEM_H_

#include <map>
#include <memory>

#include "IObject.h"

class GameItem
{
	std::map<std::string, std::unique_ptr<IObject> > item;
public:
	GameItem(std::map<std::string, std::unique_ptr<IObject>> _item);

	std::unique_ptr<IObject> getValue(const std::string& key);
	void setValue(const std::string& key, std::unique_ptr<IObject> newValue);
	virtual ~GameItem();
};

#endif
