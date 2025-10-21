#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(Lab05Tests)
    {
    public:
        TEST_METHOD(Test_Method1)
        {
            double t;
			t = f(1.0, 0, 1.0);
            Assert::AreEqual(0, t, 0.00001);
        }
    };
}