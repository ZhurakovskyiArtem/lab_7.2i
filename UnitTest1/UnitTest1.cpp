#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.2i/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int k = 3;
			const int n = 3;
			int** a = new int* [k];
			for (int i = 0; i < k; i++)
				a[i] = new int[n];
			a[k][n] = { {1, 7, 9},
						   {10, 11, 20},
						   {5, 10, 25} };
			Assert::AreEqual(3, SumMinElem(a, 3, 4));

		}
	};
}
