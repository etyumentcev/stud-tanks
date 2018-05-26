#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../libraries/data/StrategyPointer.h"
#include "../../libraries/data/ObjectBuffer.h"
#include "../../libraries/commands/BattleCommandCreateTank.h"
#include "../../libraries/data/Array.h"
#include "../../libraries/data/Integer.h"
#include "../../libraries/data/String.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace sandbox_tests
{		
	TEST_CLASS(ÑreateTankTests)
	{
	public:
		
		TEST_METHOD(createTankCommandShouldBeCalled)
		{
			//Register("Integer", new IoC::CreateNewPointer1<Integer, int>());
			//Register("String", new IoC::CreateNewPointer1<String, std::string>());
			//Register("Array", new IoC::CreateNewPointer<Array>());
			//Register("Buffer", new IoC::CreateNewPointer<ObjectBuffer>());
			//Register("CreateTank", new IoC::CreateNewPointer1<CreateTank, Pointer<IObject> >());

			

			//auto pCommand = IoC::resolve<CreateTank>("CreateTank", );

		}

	};
}
