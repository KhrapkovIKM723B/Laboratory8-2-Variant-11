// Laboratory8-2-Variant-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main() {
    std::vector<double> nums = { -2,3,-5,-4,1,5,2,-1,-3,-7};
    double positiveSum = 0.0;
    int negativeCount = 0;
    double sumBetweenPositives = 0.0;
    int positiveIndices[2] = { -1, -1 }; // Зберігає індекси першого та другого додатніх елементів

    // а) Сума додатних і кількість від’ємних елементів масиву
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > 0) {
            positiveSum += nums[i];
            if (positiveIndices[0] == -1) {
                positiveIndices[0] = i; // Знайшли перший додатній елемент
            }
            else if (positiveIndices[1] == -1) {
                positiveIndices[1] = i; // Знайшли другий додатній елемент
            }
        }
        else if (nums[i] < 0) {
            ++negativeCount;
        }
    }

    // б) Сума елементів масиву, розташованих між першим і другим додатними елементами
    if (positiveIndices[0] != -1 && positiveIndices[1] != -1) {
        for (int i = positiveIndices[0] + 1; i < positiveIndices[1]; ++i) {
            sumBetweenPositives += nums[i];
        }

    }


    std::cout << "Сума додатних елементів: " << positiveSum << std::endl;
    std::cout << "Кількість від'ємних елементів: " << negativeCount << std::endl;
    std::cout << "Сума елементів між першим і другим додатніми: " << sumBetweenPositives << std::endl;

    return 0;
}