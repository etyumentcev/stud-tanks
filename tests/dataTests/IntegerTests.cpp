#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../libraries/data/Integer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace data_tests
{		
	TEST_CLASS(IntegerTests)
	{
	public:		
		TEST_METHOD(createInteger)
		{
			const auto i = new Integer(5);
			Assert::AreEqual<int>(5, int(*i), L"The Integer was not created.");
			delete i;
		}

		TEST_METHOD(assignIntegerShouldReturn10)
		{
			const auto i = new Integer(5);
			*i = 10;
			Assert::AreEqual<int>(10, int(*i), L"Assignment does not work.");
			delete i;
		}

		TEST_METHOD(getKeyShouldReturnInteger)
		{
			const auto i = new Integer(5);
			Assert::AreEqual<std::string>("Integer", i->getKey(), L"getKey() does not work.");
			delete i;
		}

	};
}