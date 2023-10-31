#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1rek/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rek
{
	TEST_CLASS(UnitTest61rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int r[n] = { 2, 4, 6, 8, 10 };
			int expS = 0;
			for (int i = 0; i < n; i++) {
				if (!(r[i] % 2 != 0 || i % 7 == 0)) {
					expS += r[i];
				}
			}
			int s = Sum(r, n, 0);
			Assert::AreEqual(s, expS);
		}
	};
}
