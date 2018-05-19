#ifndef _BATTLECOMMAND_H_
#define _BATTLECOMMAND_H_

#include <functional>

#include "BattleCommandException.h"

typedef std::function<void() throw(BattleCommandException)> BattleCommand;

#endif
