#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.5/Lb_5.5.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

       
        TEST_METHOD(TestCountWaysForPositiveValues)
        {
            vector<int> dp(11, -1); 
            int result = countWays(10, 2, 5, 3, dp);
            Assert::AreEqual(14, result); 
        }

       
        TEST_METHOD(TestCountWaysForZero)
        {
            vector<int> dp(1, -1);
            int result = countWays(0, 2, 3, 4, dp);
            Assert::AreEqual(1, result); 
        }

        TEST_METHOD(TestCountWaysForNegative)
        {
            vector<int> dp(1, -1);
            int result = countWays(-1, 2, 3, 4, dp);
            Assert::AreEqual(0, result); 
        }

       
        TEST_METHOD(TestCountWaysForSmallValues)
        {
            vector<int> dp(6, -1);
            int result = countWays(5, 1, 2, 5, dp);
            Assert::AreEqual(9, result); 
        }
    };
}
