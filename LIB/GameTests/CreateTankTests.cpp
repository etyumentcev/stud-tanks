#include "stdafx.h"
#include "CppUnitTest.h"

#include "../../LIB/LIB/StrategyPointer.h"
#include "../../LIB/LIB/GameItemBuffer.h"
#include "../../CommandsInterpretation/CommandsInterpretation/CreateTank.h"
#include "../LIB/Array.h"
#include "../LIB/Integer.h"
#include "../LIB/String.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace game_tests
{		
	TEST_CLASS(ÑreateTankTests)
	{
	public:
		
		TEST_METHOD(createTankCommandShouldBeCalled)
		{
			Register("Integer", new IoC::CreateNewPointer1<Integer, int>());
			Register("String", new IoC::CreateNewPointer1<String, std::string>());
			Register("Array", new IoC::CreateNewPointer<Array>());
			Register("Buffer", new IoC::CreateNewPointer<GameItemBuffer>());
			Register("CreateTank", new IoC::CreateNewPointer1<CreateTank, IObject&>());

			auto pStr = IoC::resolve<String>("String", std::string("Command number"));
			auto pStr1 = IoC::resolve<String>("String", std::string("Tank type"));
			auto pStr2 = IoC::resolve<String>("String", std::string("Health"));
			auto pStr3 = IoC::resolve<String>("String", std::string("Number of bullets"));
			auto pStr4 = IoC::resolve<String>("String", std::string("Bullet type"));
			auto pStr5 = IoC::resolve<String>("String", std::string("Coordinate X"));
			auto pStr6 = IoC::resolve<String>("String", std::string("Coordinate Y"));
			auto pStr7 = IoC::resolve<String>("String", std::string("Rotate"));

			auto pInteger = IoC::resolve<Integer>("Integer", 1);
			auto pInteger1 = IoC::resolve<Integer>("Integer", 1);
			auto pInteger2 = IoC::resolve<Integer>("Integer", 100);
			auto pInteger3 = IoC::resolve<Integer>("Integer", 50);
			auto pInteger4 = IoC::resolve<Integer>("Integer", 1);
			auto pInteger5 = IoC::resolve<Integer>("Integer", 10);
			auto pInteger6 = IoC::resolve<Integer>("Integer", 15);
			auto pInteger7 = IoC::resolve<Integer>("Integer", 15);

			auto pArr = IoC::resolve<Array>("Array");

			std::vector<Pointer<IObject> > v;
			

			//auto pCommand = IoC::resolve<CreateTank>("CreateTank", );
		}

	};
}
