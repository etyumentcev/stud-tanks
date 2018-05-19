#include "stdafx.h"
#include "CppUnitTest.h"

#include "../Lib/Pointer.h"
#include "../Lib/PointerCounterResourceMonitor.h"
#include "../Lib/AlwaysDeleteResourceStrategy.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace type_system_tests
{		
	TEST_CLASS(PointerTests)
	{
	public:

		TEST_METHOD(createPointer)
		{
			const Pointer<int> p_int(new PointerCounterResourceMonitor(new int, new AlwaysDeleteResourceStrategy()));
			auto p_int2 = p_int; 
			*p_int2 = 5; 

			Assert::AreEqual(5, *p_int2, L"The pointer to int was not created.");
		}

	};
}
