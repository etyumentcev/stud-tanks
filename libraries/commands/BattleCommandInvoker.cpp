#include "BattleCommandInvoker.h"

BattleCommandInvoker::BattleCommandInvoker(BattleCommand& _command)
	: command(_command)
{

}

BattleCommand& BattleCommandInvoker::invoke() throw(BattleCommandInvokerException)
{
	return command;
}
