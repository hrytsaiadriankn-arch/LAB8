#include "pch.h"
#include "CppUnitTest.h"

#include "D:\LAB8.1 Рек\Project1\c++.cpp"

extern int FindThirdDotRec(const char* s, int index, int count);
extern void ReplaceEveryFourthRec(char* s, int index);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFindThirdDotRec_LessThanThreeDots)
		{
			const char* str = "a.b.c";
			int result = FindThirdDotRec(str, 0, 0);
			Assert::AreEqual(-1, result); // менше 3 крапок
		}

		TEST_METHOD(TestFindThirdDotRec_ExactlyThreeDots)
		{
			const char* str = "a.b.c.d";
			int result = FindThirdDotRec(str, 0, 0);
			Assert::AreEqual(5, result); // індекс третьої крапки
		}

		TEST_METHOD(TestReplaceEveryFourthRec)
		{
			char str[13] = "abcdefghijkl"; // довжина 12
			ReplaceEveryFourthRec(str, 0);
			Assert::AreEqual("abc.def.ijk.", str); // кожен 4-й символ став крапкою
		}

		TEST_METHOD(TestCombined)
		{
			char str[20] = "a.b.c.d.e.f";
			int index = FindThirdDotRec(str, 0, 0);
			Assert::AreEqual(5, index); // перевірка третьої крапки

			ReplaceEveryFourthRec(str, 0);
			Assert::AreEqual("a.b..c.d.e..", str); // перевірка зміни кожного четвертого символу
		}
	};
}