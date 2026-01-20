#include <iostream>
#include <string>
#include "LineSegment.h"

double inputDouble(std::string msg) {
    double val;
    while (true) {
        std::cout << msg;
        if (std::cin >> val) return val;
        std::cout << "Ошибка! Введите число.\n";
        std::cin.clear();
        while (std::cin.get() != '\n');
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "=== Задание 2: Перегрузка операций ===\n";

    double start = inputDouble("Введите начало отрезка (x): ");
    double end = inputDouble("Введите конец отрезка (y): ");
    LineSegment s1(start, end);

    std::cout << "\n1. Исходный отрезок: " << s1 << std::endl;
    std::cout << "2. Длина отрезка (!s1): " << !s1 << std::endl;

    ++s1;
    std::cout << "3. После ++s1: " << s1 << std::endl;

    int intPart = static_cast<int>(s1);
    double yCoord = s1;
    std::cout << "4. Целая часть X (int): " << intPart << std::endl;
    std::cout << "5. Координата Y (double): " << yCoord << std::endl;

    int d = (int)inputDouble("\nВведите целое число d для смещения: ");
    LineSegment s2 = s1 + d;
    std::cout << "6. Отрезок + d: " << s2 << std::endl;

    int point = (int)inputDouble("Введите точку для проверки (>): ");
    if (s1 > point)
        std::cout << "7. Результат: Попадает\n";
    else
        std::cout << "7. Результат: НЕ попадает\n";

    return 0;
}
