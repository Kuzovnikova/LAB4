#pragma once
#include <iostream>

class LineSegment {
private:
    double x;
    double y;

public:
    // Конструкторы
    LineSegment();
    LineSegment(double start, double end);
    LineSegment(const LineSegment& other);

    // Геттеры
    double getX() const;
    double getY() const;

    // Унарные операции
    double operator!() const;
    LineSegment& operator++();

    // Операции приведения типа
    explicit operator int() const;
    operator double() const;

    // Бинарные операции
    LineSegment operator+(int d) const;
    bool operator>(int d) const;

    // Перегрузка вывода
    friend std::ostream& operator<<(std::ostream& os, const LineSegment& s);
};