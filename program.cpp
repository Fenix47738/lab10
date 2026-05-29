#include "tasks.h"
#include <iostream>
#include <limits>

int main() {
    int choice = -1;

    while (choice != 0) {
        std::cout << "\nMenu:\n";
        std::cout << " 1 - Task 1 (DaysInMonth)\n";
        std::cout << " 2 - Task 2 (Fahrenheit -> Celsius)\n";
        std::cout << " 3 - Task 3 (One of the numbers is odd)\n";
        std::cout << " 0 - Exit\n";
        std::cout << "Choose an option: ";

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case 0:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Unknown option. Please try again.\n";
                break;
        }

        if (choice != 0) {
            std::cout << "\nPress Enter to return to the menu...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
        }
    }

    return 0;
}
