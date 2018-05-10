#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\Lib\IoC.h"
#include "..\Lib\Pointer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace IoC;

namespace LibTests
{		
	TEST_CLASS(IoCTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{


			Register("int", new CreateNew<int>());
			Pointer<int> int1 = IoC::Resolve<int>("int");

			Pointer<int> int2 = int1;
			*int2 = 5;
			Assert::AreEqual(5, *int2, L"");
		}

		TEST_METHOD(TestMethod2)
		{

			IoC::Register("A", new IoC::CreateNew1<A, std::string>()); 

			Pointer<A> pA = IoC::Resolve<A>("A", std::string("abc")); 

			pA->doSomething(); 

		}
	};
}
