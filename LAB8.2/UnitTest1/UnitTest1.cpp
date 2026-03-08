#include "pch.h"
#include "CppUnitTest.h"

#include "D:/LAB8.2/Project1/c++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCapitalAfterDot)
        {
            std::string input = "this is a test. another sentence.";
            std::string expected = "this is a test. Another sentence.";

            std::string result = CapitalAfterDot(input);

            Assert::AreEqual(expected.c_str(), result.c_str());
        }
    };
}
