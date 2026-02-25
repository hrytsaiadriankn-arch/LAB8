#include "pch.h"
#include "CppUnitTest.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

int FindThirdDot(const string& s)
{
    size_t pos = 0;
    int count = 0;

    while ((pos = s.find('.', pos)) != string::npos)
    {
        count++;
        if (count == 3)
            return (int)pos;

        pos++;
    }

    return -1;
}

void ReplaceEveryFourth(string& s)
{
    for (size_t i = 3; i < s.length(); i += 4)
        s[i] = '.';
}


namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestFindThirdDot_Found)
        {
            string s = "a.b.c.d.e";
            int index = FindThirdDot(s);
            Assert::AreEqual(4, index); 
        }

        TEST_METHOD(TestFindThirdDot_NotFound)
        {
            string s = "a.b";
            int index = FindThirdDot(s);
            Assert::AreEqual(-1, index); 
        }

        TEST_METHOD(TestReplaceEveryFourth_Normal)
        {
            string s = "abcdefgh";
            ReplaceEveryFourth(s);
            Assert::AreEqual(string("abc.def.h"), s);
        }

        TEST_METHOD(TestReplaceEveryFourth_ShortString)
        {
            string s = "abc"; 
            ReplaceEveryFourth(s);
            Assert::AreEqual(string("abc"), s); 
        }

        TEST_METHOD(TestReplaceEveryFourth_ExactLength)
        {
            string s = "abcd"; 
            ReplaceEveryFourth(s);
            Assert::AreEqual(string("abc."), s);
        }

    };
}