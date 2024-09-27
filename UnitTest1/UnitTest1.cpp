#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1

{
	int sum(int a, int b) {
		return a + b;
	}

	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int result = sum(2, 3);
			Assert::AreEqual(5, result); 
		}

	};
}