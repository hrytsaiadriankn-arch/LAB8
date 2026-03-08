#include "pch.h"
#include "CppUnitTest.h"

#include "D:\LAB8.1 Іт\Project1\c++.cpp"

int FindThirdDot(const char* s);
void ReplaceEveryFourth(char* s);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(FindThirdDot_ThreeDots)
        {
            const char* str = "a.b.c.d";
            int result = FindThirdDot(str);
            Assert::AreEqual(5, result);
        }

        TEST_METHOD(FindThirdDot_LessThanThreeDots)
        {
            const char* str = "a.b";
            int result = FindThirdDot(str);
            Assert::AreEqual(-1, result);
        }

        TEST_METHOD(FindThirdDot_ExactlyThreeDots)
        {
            const char* str = "...";
            int result = FindThirdDot(str);
            Assert::AreEqual(2, result);
        }

        TEST_METHOD(ReplaceEveryFourth_NormalString)
        {
            char str[20] = "abcdefgh";
            ReplaceEveryFourth(str);
            Assert::AreEqual("abc.efg.", str);
        }

        TEST_METHOD(ReplaceEveryFourth_ShortString)
        {
            char str[5] = "abc";
            ReplaceEveryFourth(str);
            Assert::AreEqual("abc", str);
        }

        TEST_METHOD(ReplaceEveryFourth_WithNumbers)
        {
            char str[20] = "123456789";
            ReplaceEveryFourth(str);
            Assert::AreEqual("123.567.9", str);
        }
    };
}