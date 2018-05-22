#include "CommandBasedBattle.h"

CommandBasedBattle::CommandBasedBattle(IBattleCommandInvoker& commandSource)
	: commandSource_(commandSource)
{

}

void CommandBasedBattle::process() throw(BattleException)
{
	try
	{
		auto& command = commandSource_.invoke();
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
