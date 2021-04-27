#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1b/Money.h"
#include "../5.1b/Money.cpp"
#include "../5.1b/MyException.cpp"
#include "../5.1b/MyException.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			double s = a.Divide(20, 2);
			Assert::AreEqual(s, 10.0);
		}
	};
}
