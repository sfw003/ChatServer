// Calculator.h
#pragma once
#include <stdexcept>
class Calculator 
{
public:
    int Add(int a, int b) { return a + b; }
    int Subtract(int a, int b) { return a - b; }
    int Multiply(int a, int b) { return a * b; }
    double Divide(int a, int b) {
        if (b == 0) throw std::invalid_argument("Division by zero");
        return static_cast<double>(a) / b;
    }
};
