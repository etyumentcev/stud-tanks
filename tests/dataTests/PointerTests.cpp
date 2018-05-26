#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../libraries/data/Pointer.h"
#include "../../libraries/data/PointerCounterResourceMonitor.h"
#include "../../libraries/data/AlwaysDeleteResourceStrategy.h"
#include "../../libraries/data/StrategyPointer.h"
#include "../../libraries/data/Integer.h"


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
		/*
		TEST_METHOD(types)
		{
			IoC::Register("B", new IoC::CreateNewPointer1<B, std::string>()); 
			IoC::Register("A", new IoC::CreateNewPointer1<A, std::string>()); 
			Pointer<B> pB = IoC::resolve<B>("B", std::string("1")); 
			Pointer<A> pA = pB; 
			Assert::AreEqual<std::string>("1", pA->doSomething());								
		}

		TEST_METHOD(types)
		{
			Ref<A> pA = IoC::resolve<A>("A", std::string("1")); 
			Ref<B> pB = pA; 

			pB->doSomething(); 									
		}

		TEST_METHOD(types)
		{
			Pointer<Integer> pI = IoC::resolve<Integer>("Integer", int(5)); 
			Pointer<IObject> pO = IoC::resolve<IObject>("IO", pA); 
			pB->doSomething();								
		}
		*/
	};
}
