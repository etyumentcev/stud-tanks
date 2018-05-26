#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../libraries/data/Array.h"
#include "../../libraries/data/PointerCounterResourceMonitor.h"
#include "../../libraries/data/AlwaysDeleteResourceStrategy.h"
#include "../../libraries/data/Integer.h"
#include "../../libraries/data/Pointer.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace data_tests
{		
	TEST_CLASS(ArrayTests)
	{
	public:		
		TEST_METHOD(createArray)
		{
			const Pointer<Integer> pObj(new PointerCounterResourceMonitor(new Integer(5), new AlwaysDeleteResourceStrategy()));
			Pointer<IObject> pIObj = pObj;
			std::vector<Pointer<IObject> > v;
			v.push_back(pObj);
			const auto pArr = new Array(v);
			auto arr = *pArr;
			const auto pInt = arr[0];
			Pointer<Integer> integer = pInt;
			Assert::AreEqual<int>(5,  int(*integer));

			delete pArr;


		}

	};
}
