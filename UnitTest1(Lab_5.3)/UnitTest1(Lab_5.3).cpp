#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.3/Lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab53
{
	TEST_CLASS(UnitTest1Lab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l = j(0);
			Assert::AreEqual(l, 1.0);
		}
	};
}
