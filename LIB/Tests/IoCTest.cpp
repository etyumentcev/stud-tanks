#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Lib\IoC.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace IoC;

namespace LibTests
{		
	TEST_CLASS(IoCTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			IoC::Register("int", new IoC::CreateNew<int>());
			Pointer<int> int1 = IoC::Resolve<int>("int");

			Pointer<int> int2 = int1;
			*int2 = 5;
			Assert::AreEqual(5, *int2, L"sas");

		}

	};
}