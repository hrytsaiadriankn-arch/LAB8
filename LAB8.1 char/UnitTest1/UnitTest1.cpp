#include "pch.h"
#include "CppUnitTest.h"


#include "D:\LAB8.1 char\Project1\c++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestFindThirdDot_ThreeDots)
		{
			char str[] = "a.b.c.d";
			int index = FindThirdDot(str);
			Assert::AreEqual(4, index);  // третя крапка на позиції 4
		}

		TEST_METHOD(TestFindThirdDot_LessThanThreeDots)
		{
			char str[] = "a.b.c";
			int index = FindThirdDot(str);
			Assert::AreEqual(-1, index);  // менше трьох крапок
		}

		TEST_METHOD(TestReplaceEveryFourth)
		{
			char str[] = "abcdefghijk";
			ReplaceEveryFourth(str);
			Assert::AreEqual(std::string("abc.def.ijk"), std::string(str));
		}

		TEST_METHOD(TestReplaceEveryFourth_ShortString)
		{
			char str[] = "abc";
			ReplaceEveryFourth(str);
			Assert::AreEqual(std::string("abc"), std::string(str)); // рядок коротший за 4 символи
		}

	};
}
