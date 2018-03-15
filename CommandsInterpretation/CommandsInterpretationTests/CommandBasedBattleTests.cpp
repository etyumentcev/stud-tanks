#include "stdafx.h"

#include <functional>

#include "CppUnitTest.h"

#include "../CommandsInterpretation/CommandBasedBattle.h"
#include "../CommandsInterpretation/IBattleCommandInvoker.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CommandsInterpretationTests
{		
	TEST_CLASS(CommandBasedBattleTests)
	{
	public:
		
		TEST_METHOD(CommandBasedBattleShouldCallTheCommand)
		{
			bool wasCalled = false;
			BattleCommand command = [&wasCalled]() { wasCalled = true; };

		}

	};
}