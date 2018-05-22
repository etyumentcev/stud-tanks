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
	TEST_CLASS(IoCTests)
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
	};

	TEST_CLASS(IntegerAcrossIoCTests)
	{
	public:
		TEST_METHOD(createIntegerAcrossIoC)
		{
			Register("Integer", new IoC::CreateNewPointer1<Integer, int>());
			auto i = IoC::resolve<Integer>("Integer", 5);
			Assert::AreEqual<int>(5, int(*i), L"The Integer across IoC was not created.");
		}

		TEST_METHOD(assignIntegerAcrossIoCShouldReturn10)
		{
			auto i = IoC::resolve<Integer>("Integer", 5);
			*i = 10;
			Assert::AreEqual<int>(10, int(*i), L"Assignment across IoC does not work.");
		}

		TEST_METHOD(getKeyAcrossIoCShouldReturnInteger)
		{
			auto i = IoC::resolve<Integer>("Integer", 5);
			Assert::AreEqual<std::string>("Integer", i->getKey(), L"getKey() across IoC does not work.");
		}

	};
}
