#include "stdafx.h"
#include "CppUnitTest.h"

#include "../Lib/String.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lib_tests
{		
	TEST_CLASS(StringTests)
	{
	public:		
		TEST_METHOD(createString)
		{
			const auto s = new String("text");
			Assert::AreEqual<std::string>("text", std::string(*s), L"The String was not created.");
			delete s;
		}

		TEST_METHOD(getKeyShouldReturnString)
		{
			const auto s = new String("text");
			Assert::AreEqual<std::string>("String", s->getKey(), L"getKey() does not work.");
			delete s;
		}

	};
}
