#ifndef _BATTLE_COMMAND_H_
#define _BATTLE_COMMAND_H_

#include <functional>

#include "BattleCommandException.h"

typedef std::function<void() throw(BattleCommandException)> BattleCommand;

#endif
