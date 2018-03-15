#include "CommandBasedBattle.h"

CommandBasedBattle::CommandBasedBattle(IBattleCommandInvoker& _commandSource)
	: commandSource(_commandSource)
{

}

void CommandBasedBattle::process() throw(BattleException)
{
	try
	{
		BattleCommand& command = commandSource.invoke();
		try
		{
			command();
		}
		catch (BattleCommandException& ex)
		{
			ex.handle();
			throw BattleException();
		}
	}
	catch (BattleCommandInvokerException& ex)
	{
		ex.handle();
		throw BattleException();
	}
}
