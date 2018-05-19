#ifndef _GAME_ITEM_H_
#define _GAME_ITEM_H_

#include <map>

#include "IObject.h"
#include "Pointer.h"

class GameItem
{
	std::map<std::string, Pointer<IObject> > item_;
public:
	explicit GameItem(std::map<std::string, Pointer<IObject>> item);

	Pointer<IObject> getValue(const std::string& key);
	void setValue(const std::string& key, Pointer<IObject> newValue);
	virtual ~GameItem();
};

#endif
