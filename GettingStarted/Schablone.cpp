// Schablone.cpp

#include <iostream>
#include <random>
#include <time.h>

//class Calculator
//{
//public:
//    static int add(int x, int y) { return x + y; }
//    static int sub(int x, int y) { return x - y; }
//    static int mul(int x, int y) { return x * y; }
//    static int div(int x, int y) { return x / y; }
//};
//
//class DoubleCalculator
//{
//public:
//    static double add(double x, double y) { return x + y; }
//    static double sub(double x, double y) { return x - y; }
//    static double mul(double x, double y) { return x * y; }
//    static double div(double x, double y) { return x / y; }
//};

template <typename T>
class Calculator
{
public:
    static T add(T x, T y) {
        return x + y;
    }
    static T sub(T x, T y) { return x - y; }
    static T mul(T x, T y) { return x * y; }
    static T div(T x, T y) { return x / y; }
};


void test_schablone()
{
    Calculator<int> calc;
    int result = calc.add(5, 7);

    // angesagt: 

    int result2 = Calculator<int>::add(5, 7);

    double result3 = Calculator<double>::add(5.3, 7.55);
}