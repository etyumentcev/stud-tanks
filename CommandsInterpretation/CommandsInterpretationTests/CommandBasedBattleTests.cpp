#include "stdafx.h"

#include <functional>

#include "CppUnitTest.h"

#include "../CommandsInterpretation/CommandBasedBattle.h"
#include "../CommandsInterpretation/IBattleCommandInvoker.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace sandboxTests
{
	TEST_CLASS(CommandBasedBattleTests)
	{
	public:

		TEST_METHOD(CommandBasedBattleShouldCallTheCommand)
		{
			bool wasCalled = false;
			BattleCommand command = [&wasCalled]() {wasCalled = true; };

			fakeit::Mock<IBattleCommandInvoker> mock;
			fakeit::When(Method(mock, invoke)).Return(command);

			CommandBasedBattle battle(mock.get());

			battle.process();

			fakeit::Verify(Method(mock, invoke)).Once();
			Assert::IsTrue(wasCalled);
		}

		TEST_METHOD(CommandBasedBattleShouldThrowBattleExceptionIfBattleCommandInvokerThrowsException)
		{
			fakeit::Mock<IBattleCommandInvoker> mock;
			fakeit::When(Method(mock, invoke)).Throw(BattleCommandInvokerException());

			CommandBasedBattle battle(mock.get());

			Assert::ExpectException<BattleException>([&battle]() { battle.process(); });

			fakeit::Verify(Method(mock, invoke)).Once();
		}

		TEST_METHOD(CommandBasedBattleShouldThrowBattleExceptionIfBattleCommandThrowsException)
		{
			bool wasCalled = false;
			BattleCommand command = [&wasCalled]()
			{
				wasCalled = true;
				throw BattleCommandException();
			};

			fakeit::Mock<IBattleCommandInvoker> mock;
			fakeit::When(Method(mock, invoke)).Return(command);

			CommandBasedBattle battle(mock.get());

			Assert::ExpectException<BattleException>([&battle]() {battle.process(); });

			fakeit::Verify(Method(mock, invoke)).Once();
			Assert::IsTrue(wasCalled);
		}

	};
}