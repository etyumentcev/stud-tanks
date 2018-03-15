#include "stdafx.h"

#include <functional>

#include "CppUnitTest.h"

#include "../CommandsInterpretation/CommandBasedBattle.h"
#include "../CommandsInterpretation/BattleCommandInvoker.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CommandsInterpretationTests
{		
	TEST_CLASS(CommandBasedBattleTests)
	{
	public:
		
		TEST_METHOD(CommandBasedBattleShouldCallTheCommand)
		{
			size_t numberOfCalls = 0;
			bool wasCalled = false;

			BattleCommand command = [&wasCalled, &numberOfCalls]() { wasCalled = true; ++numberOfCalls; };

			IBattleCommandInvoker* invoker = new BattleCommandInvoker(command);
			IBattle* battle = new CommandBasedBattle(*invoker);

			battle->process();

			Assert::IsTrue(wasCalled);
			Assert::AreEqual<size_t>(1, numberOfCalls);
		}
		TEST_METHOD(CommandBasedBattleShouldThrowBattleExceptionIfBattleCommandInvokerThrowsException)
		{
			size_t numberOfCalls = 0;
			
			BattleCommand command = [&numberOfCalls]() { ++numberOfCalls; throw BattleCommandInvokerException(); };

			IBattleCommandInvoker* invoker = new BattleCommandInvoker(command);
			IBattle* battle = new CommandBasedBattle(*invoker);

			Assert::ExpectException<BattleException>([&battle]() { battle->process(); });
			Assert::AreEqual<size_t>(1, numberOfCalls);
		}
		TEST_METHOD(CommandBasedBattleShouldThrowBattleExceptionIfBattleCommandThrowsException)
		{
			size_t numberOfCalls = 0;
			bool wasCalled = false;

			BattleCommand command = [&wasCalled, &numberOfCalls]()
			{
				++numberOfCalls;
				wasCalled = true;
				throw BattleCommandException();
			};

			
			IBattleCommandInvoker* invoker = new BattleCommandInvoker(command);
			IBattle* battle = new CommandBasedBattle(*invoker);
			
			Assert::ExpectException<BattleException>([&battle]() {battle->process(); });
			Assert::IsTrue(wasCalled);
			Assert::AreEqual<size_t>(1, numberOfCalls);
		}
	};
}