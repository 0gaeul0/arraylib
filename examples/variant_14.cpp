#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int sensor[] = {
        20, 19, 27, 23, 17,
        21, 26, 22, 18, 30,
        24, 16
    };

    const std::size_t n = sizeof(sensor) / sizeof(sensor[0]);

    std::size_t below_range = 0;
    std::size_t above_range = 0;

    for (std::size_t i = 0; i < n; ++i) {
        if (sensor[i] < 18) {
            ++below_range;
        } else if (sensor[i] > 25) {
            ++above_range;
        }
    }

    std::cout << "Показания датчика температуры\n";
    std::cout << "Исходные данные: ";

    for (std::size_t i = 0; i < n; ++i) {
        std::cout << sensor[i];
        if (i + 1 < n) {
            std::cout << ", ";
        }
    }

    std::cout << "\nКоличество измерений: " << n << '\n';
    std::cout << "Допустимый диапазон: 18-25 градусов\n\n";
    std::cout << "Минимальное показание: " << arr_min(sensor, n) << '\n';
    std::cout << "Максимальное показание: " << arr_max(sensor, n) << '\n';
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Среднее показание: " << arr_average(sensor, n) << '\n';
    std::cout << "Значений ниже диапазона: " << below_range << '\n';
    std::cout << "Значений выше диапазона: " << above_range << '\n';

    return 0;
}
