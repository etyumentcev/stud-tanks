#include "stdafx.h"
#include "CppUnitTest.h"

#include "../TypeSystem/ObjectBuffer.h"

#include <utility>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace fakeit;

namespace TypeSystemTests
{		
	TEST_CLASS(ObjectBufferTests)
	{
	public:
		
		TEST_METHOD(createObjectBuffer)
		{
			/*
			Mock<Object> mock;

			Mock<Pointer<Object>> mock1;
			When(Method(mock1, getObject)).Return(mock.get());

			//SmartPointer<Object> firstObjectPointer = mock1.get();
			
			vector<Pointer<Object>> buffer;
			buffer.push_back(mock1.get());

			auto ponterToObjectBuffer = make_shared<ObjectBuffer>(ObjectBuffer(buffer));

			Assert::AreEqual(mock.get(), ((ponterToObjectBuffer.get())->getPointerToObject(1)).getObject());
			*/
		}

	};
}
