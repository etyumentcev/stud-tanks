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
			const auto p_int1 = Resolve<int>("int");
			auto p_int2 = p_int1;
			*p_int2 = 5;
			Assert::AreEqual(5, *p_int2, L"The pointer to int was not created.");
		}

		TEST_METHOD(createAPointerToIntegerUsingIoC)
		{
			Register("Integer", new CreateNewPointer1<Integer, int>());
			const auto p_integer1 = Resolve<Integer>("Integer", 5);
			auto p_integer2 = p_integer1;
			*p_integer2 = 5;
			const auto integer2 = static_cast<int>(*p_integer2);
			Assert::AreEqual<int>(5, integer2, L"The pointer to Integer was not created.");
		}
	};
}
