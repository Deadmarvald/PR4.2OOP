#include "pch.h"
#include "CppUnitTest.h"
#include "../PR4.2/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT42
{
	TEST_CLASS(UT42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex t(1, 1, 1, 1);

			Assert::AreEqual(t.GetX1(), t.GetX2());
		}
	};
}