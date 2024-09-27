#include "pch.h"
#include "CppUnitTest.h"
#include "../UnitTest1/UnitTest1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod3)
		{
				int t;
				t = UnitTest1::sum(2, 3);
				Assert::AreEqual(t, 5);
		}
	};
}
