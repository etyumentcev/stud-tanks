#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\Lib\IoC.h"
#include "..\Lib\Pointer.h"
#include "..\Lib\StrategyPointer.h"
#include "..\Lib\Integer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace IoC;

namespace LibTests
{		
	TEST_CLASS(IoCTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Register("int", new CreateNewPointer<int>());
			Pointer<int> int1 = Resolve<int>("int");

			Pointer<int> int2 = int1;
			*int2 = 5;
			Assert::AreEqual(5, *int2, L"");
		}

		TEST_METHOD(TestMethod2)
		{

			Register("Integer", new CreateNewPointer<Integer>()); 

			Pointer<Integer> pInteger1 = Resolve<Integer>("Integer"); 
			Pointer<Integer> pInteger2 = pInteger1;
			*pInteger2 = 5;
			Assert::AreEqual<int>(5, *pInteger2, L"");

		}
	};
}
