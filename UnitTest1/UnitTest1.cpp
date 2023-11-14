#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1 it c++/Lab 8.1 it c++.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(FindCharTest)
        {
            char str[12] = "1,2,4,5,6,7";
            int result = Count(str);
            Assert::AreEqual(result, 5);
        }
    };
}