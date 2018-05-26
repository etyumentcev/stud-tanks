#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../libraries/data/IoC.h"
#include "../../libraries/data/Pointer.h"
#include "../../libraries/data/StrategyPointer.h"
#include "../../libraries/data/Integer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace data_tests
{		
	TEST_CLASS(IoCTests)
	{
	public:		
		TEST_METHOD(createAPointerToIntUsingIoC)
		{
			Register("int", new IoC::CreateNewPointer<int>());
			IoC::ContainerDestroyer destroyer;
			const auto pInt1 = IoC::resolve<int>("int");
			auto pInt2 = pInt1;
			*pInt2 = 5;
			Assert::AreEqual(5, *pInt2, L"The pointer to int was not created.");
			destroyer.initialize();
		}
	};

	TEST_CLASS(IntegerAcrossIoCTests)
	{
	public:
		TEST_METHOD(createIntegerAcrossIoC)
		{
			Register("Integer", new IoC::CreateNewPointer1<Integer, int>());
			IoC::ContainerDestroyer destroyer;
			auto i = IoC::resolve<Integer>("Integer", 5);
			Assert::AreEqual<int>(5, int(*i), L"The Integer across IoC was not created.");
			
			destroyer.initialize();

		}

		TEST_METHOD(assignIntegerAcrossIoCShouldReturn10)
		{
			Register("Integer", new IoC::CreateNewPointer1<Integer, int>());
			IoC::ContainerDestroyer destroyer;
			auto i = IoC::resolve<Integer>("Integer", 5);
			*i = 10;
			Assert::AreEqual<int>(10, int(*i), L"Assignment across IoC does not work.");
			
			destroyer.initialize();
		}

		TEST_METHOD(getKeyAcrossIoCShouldReturnInteger)
		{
			Register("Integer", new IoC::CreateNewPointer1<Integer, int>());
			IoC::ContainerDestroyer destroyer;
			auto i = IoC::resolve<Integer>("Integer", 5);
			Assert::AreEqual<std::string>("Integer", i->getKey(), L"getKey() across IoC does not work.");
			
			destroyer.initialize();

		}

	};
}
