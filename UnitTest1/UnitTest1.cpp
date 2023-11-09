#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = a(1, 2);
			Assert::AreEqual(t, 4, 0.0000001);
		}
	};
}
