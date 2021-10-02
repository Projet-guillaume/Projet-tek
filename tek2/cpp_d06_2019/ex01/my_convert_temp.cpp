/*
** EPITECH PROJECT, 2020
** my_convert_temp
** File description:
** cpp
*/

#include <iostream>
#include <cstring>
#include <iomanip>

int main(void)
{
    std::string str;
    float i = 0;
    float result = 0;

    std::cin >> i >> str;
    if (str.compare("Celsius") == 0) {
        result = i * 9.00 / 5.00 + 32;
        std::cout.setf(std::ios::fixed, std::ios::floatfield);
        std::cout << std::setw(16) << std::setprecision(3) << result << std::setw(16) << "Fahrenheit" << std::endl;
    } else if (str.compare("Fahrenheit") == 0) {
        result = (5.00 / 9.00) * (i - 32);
        std::cout.setf(std::ios::fixed, std::ios::floatfield);
        std::cout << std::setw(16) << std::setprecision(3) << result << std::setw(16) << "Celsius" << std::endl;
    }
}
