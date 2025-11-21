#include "pch.h"
#include "CppUnitTest.h"
#include "../var8/var8.h" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
    TEST_CLASS(DistanceCalculatorTests)
    {
    public:
        TEST_METHOD(EuclideanDistance_Simple)
        {
            DistanceCalculator calc;
            double result = calc.calculateDistance(0, 0, 3, 4);
            Assert::AreEqual(5.0, result, 0.0001, L"Åâêëèäîâî ðàññòîÿíèå äîëæíî áûòü 5.0");
        }

        TEST_METHOD(ManhattanDistance_Simple)
        {
            DistanceCalculator calc;
            double result = calc.calculateManhattanDistance(0, 0, 3, 4);
            Assert::AreEqual(7.0, result, 0.0001, L"Ìàíõýòòåíñêîå ðàññòîÿíèå äîëæíî áûòü 7.0");
        }
    };
}
