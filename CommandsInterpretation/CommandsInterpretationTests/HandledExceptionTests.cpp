#include "stdafx.h"

#include "CppUnitTest.h"

#include "../CommandsInterpretation/HandledException.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace commands_interpretation_tests
{
	TEST_CLASS(HandledExceptionTests)
	{
	public:

		TEST_METHOD(handledExceptionShouldCallExceptionHandler)
		{
			auto wasCalled = false;
			HandledException ex;

			ex.handle([&wasCalled]() { wasCalled = true; });

			Assert::IsTrue(wasCalled);
		}

	};
}
