#include "stdafx.h"
#include "CppUnitTest.h"

#include "../Lib/IoC.h"
#include "../Lib/Pointer.h"
#include "../Lib/StrategyPointer.h"
#include "../Lib/Integer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace IoC;

namespace lib_tests
{		
	TEST_CLASS(IoCTest)
	{
	public:		
		TEST_METHOD(createAPointerToIntUsingIoC)
		{
			Register("int", new CreateNewPointer<int>());
			const auto pInt1 = resolve<int>("int");
			auto pInt2 = pInt1;
			*pInt2 = 5;
			Assert::AreEqual(5, *pInt2, L"The pointer to int was not created.");
		}

		TEST_METHOD(createAPointerToIntegerUsingIoC)
		{
			Register("Integer", new CreateNewPointer1<Integer, int>());
			const auto pInteger1 = resolve<Integer>("Integer", 5);
			auto pInteger2 = pInteger1;
			*pInteger2 = 5;
			const auto integer2 = static_cast<int>(*pInteger2);
			Assert::AreEqual<int>(5, integer2, L"The pointer to Integer was not created.");
		}
	};
}
