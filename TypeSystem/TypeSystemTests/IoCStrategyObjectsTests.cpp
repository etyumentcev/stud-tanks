#include "stdafx.h"
#include "CppUnitTest.h"

#include "../TypeSystem/IoCStrategyObjects.h"
#include "../TypeSystem/IoC.h"
#include "../TypeSystem/Integer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace fakeit;

namespace TypeSystemTests
{		
	TEST_CLASS(IoCStrategyObjectsTests)
	{
	public:
		
		TEST_METHOD(createIoCStrategyObjects)
		{
			/*
			IoC* i = new IoC();
			Pointer<IoCStrategy> pointerToIoCStrategyObjects = new IoCStrategyObjects();
			i->Register("Objects", pointerToIoCStrategyObjects);
			IObject* integer = new Integer(1);
			pointerToIoCStrategyObjects->addStrategy("Integer", *integer);
			Assert::AreEqual(1, i->Resolve("Objects", "Integer"));*/
		}

	};
}
