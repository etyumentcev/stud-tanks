#include "stdafx.h"
#include "CppUnitTest.h"

#include "../Lib/Pointer.h"
#include "../Lib/PointerCounterResourceMonitor.h"
#include "../Lib/AlwaysDeleteResourceStrategy.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TypeSystemTests
{		
	TEST_CLASS(PointerTests)
	{
	public:

		TEST_METHOD(createPointer)
		{
			Pointer<int> pInt(new PointerCounterResourceMonitor(new int, new AlwaysDeleteResourceStrategy())); 
			Pointer<int> pInt2 = pInt; 
			*pInt2 = 5; 

			Assert::AreEqual(5, *pInt2, L"");
		}

	};
}
