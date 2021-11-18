#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.1/lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		

		TEST_METHOD(Test111)
		{
			double t;
			t = f(1, 1, 1);
			Assert::AreEqual(t, 2 * sin(1) + 1);
		}

		TEST_METHOD(Test011)
		{
			double t;
			t = f(0, 1, 1);
			Assert::AreEqual(t, 1.0);
		}

		TEST_METHOD(Test0_5)
		{
			double t;
			t = f(1, 0.5, 1);
			Assert::AreEqual(t, sin(0.5)+0.5*sin(1)+1);
		}

		TEST_METHOD(Test000)
		{
			double t;
			t = f(0, 0, 0);
			Assert::AreEqual(t, 0.);
		}
	};
}
