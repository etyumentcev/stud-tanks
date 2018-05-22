#include "CreateTank.h"
#include "../data/StrategyPointer.h"

CreateTank::CreateTank(IObject& argsArray) : argsArray_(argsArray)
{

}

BattleCommand& CreateTank::invoke() throw(BattleCommandInvokerException)
{
	auto& args = argsArray_;
	BattleCommand command;
	return command = [&args] () {
		auto pBuffer = IoC::resolve<GameItemBuffer>("Buffer");
		const auto pTank = IoC::resolve<GameItem, IObject&>(std::string("Tank"), args);
		pBuffer->addGameItem(pTank);
	};
}
