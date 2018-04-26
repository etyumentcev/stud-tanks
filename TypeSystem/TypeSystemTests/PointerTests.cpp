#include "stdafx.h"
#include "CppUnitTest.h"

#include "../TypeSystem/Pointer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace fakeit;

namespace TypeSystemTests
{		
	TEST_CLASS(PointerTests)
	{
	public:
		
		TEST_METHOD(createPointer)
		{
			Pointer<int> integer = new int;
			*integer = 3;
			Assert::AreEqual<int>(3, *integer);
		}

	};
}
