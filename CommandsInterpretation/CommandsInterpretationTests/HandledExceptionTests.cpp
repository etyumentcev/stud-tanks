#include "stdafx.h"

#include "CppUnitTest.h"

#include "../CommandsInterpretation/HandledException.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CommandsInterpretationTests
{
	TEST_CLASS(HandledExceptionTests)
	{
	public:

		TEST_METHOD(HandledExceptionShouldCallExceptionHandler)
		{
			bool wasCalled = false;
			HandledException ex;

			ex.handle([&wasCalled]() { wasCalled = true; });

			Assert::IsTrue(wasCalled);
		}

	};
}