#pragma once

#include "types.h"

struct FahrenheitTemperature {
    double TF;
    double TC;
};

struct TwoIntegers {
    int A;
    int B;
    bool isExactlyOneOdd;
};

int DaysInMonth(const TDate& D);
void task1();
void task2();
void task3();
void ConvertFahrenheitToCelsius(FahrenheitTemperature& data);
void EvaluateOddStatement(TwoIntegers& data);
