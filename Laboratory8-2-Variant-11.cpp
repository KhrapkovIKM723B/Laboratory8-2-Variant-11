// Laboratory8-2-Variant-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

int main() {
    int n;
    std::cout << "Введіть ціле число n (n < 999999): ";
    std::cin >> n;

    std::string number = std::to_string(n);
    std::vector<int> digits(6, 0); // Масив з 6 елементів, заповнений нулями

    // Заповнення масиву цифрами числа у зворотному порядку
    int numLength = number.length();
    for (int i = 0; i < numLength; ++i) {
        digits[i] = number[numLength - i - 1] - '0'; // Перетворення символу на число
    }

    // Виведення масиву
    std::cout << "Масив, заповнений цифрами числа у зворотному порядку: ";
    for (int digit : digits) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
