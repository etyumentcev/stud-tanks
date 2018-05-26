#include "BattleCommandCreateTank.h"
#include "../data/StrategyPointer.h"

CreateTank::CreateTank(const Pointer<IObject> argsArray) : argsArray_(argsArray)
{

}

BattleCommand& CreateTank::invoke() throw(BattleCommandInvokerException)
{
	auto& args = argsArray_;
	BattleCommand command;
	return command = [&args] () {
		auto pBuffer = IoC::resolve<ObjectBuffer>("Buffer");
		const auto pTank = IoC::resolve<Pointer<IObject>, Pointer<IObject> >(std::string("Tank"), args);
		pBuffer->addObject(pTank);
	};
}
