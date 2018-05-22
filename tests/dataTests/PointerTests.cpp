#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../libraries/data/Pointer.h"
#include "../../libraries/data/PointerCounterResourceMonitor.h"
#include "../../libraries/data/AlwaysDeleteResourceStrategy.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace data_tests
{		
	TEST_CLASS(PointerTests)
	{
	public:

		TEST_METHOD(createPointer)
		{
			const Pointer<int> pInt(new PointerCounterResourceMonitor(new int, new AlwaysDeleteResourceStrategy()));
			auto pInt2 = pInt; 
			*pInt2 = 5; 

			Assert::AreEqual(5, *pInt2, L"The pointer to int was not created.");
		}

	};
}
