#include "tasks.h"
#include <iostream>

static bool IsLeapYear(int year) {
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int DaysInMonth(const TDate& D) {
    switch (D.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return IsLeapYear(D.year) ? 29 : 28;
        default:
            return 0;
    }
}

void task1() {
    std::cout << "\nTask 1: Number of days in a month for 5 dates\n";
    for (int i = 1; i <= 5; ++i) {
        TDate date{};
        std::cout << "\nDate " << i << " (day month year): ";
        std::cin >> date.day >> date.month >> date.year;
        int days = DaysInMonth(date);
        std::cout << "Date: " << date.day << "." << date.month << "." << date.year
                  << "; Number of days in the month: " << days << "\n";
    }
}

void ConvertFahrenheitToCelsius(FahrenheitTemperature& data) {
    data.TC = (data.TF - 32.0) * 5.0 / 9.0;
}

void EvaluateOddStatement(TwoIntegers& data) {
    bool aOdd = (data.A % 2 != 0);
    bool bOdd = (data.B % 2 != 0);
    data.isExactlyOneOdd = (aOdd != bOdd);
}

void task2() {
    FahrenheitTemperature temp{};
    std::cout << "\nTask 2: Conversion of temperature from Fahrenheit to Celsius\n";
    std::cout << "Enter the temperature TF in degrees Fahrenheit: ";
    std::cin >> temp.TF;
    ConvertFahrenheitToCelsius(temp);
    std::cout << "TF = " << temp.TF << " °F => TC = " << temp.TC << " °C\n";
}

void task3() {
    TwoIntegers values{};
    std::cout << "\nTask 3: Checking the statement about oddness\n";
    std::cout << "Enter two integers A and B: ";
    std::cin >> values.A >> values.B;
    EvaluateOddStatement(values);
    std::cout << "A = " << values.A << ", B = " << values.B << "\n";
    std::cout << "The statement \"Exactly one of the numbers A and B is odd\" is: "
              << (values.isExactlyOneOdd ? "true" : "false") << "\n";
}
