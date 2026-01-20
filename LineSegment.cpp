#include "LineSegment.h"
#include <cmath>
#include <algorithm>

LineSegment::LineSegment() : x(0), y(0) {}

LineSegment::LineSegment(double start, double end) : x(start), y(end) {}

LineSegment::LineSegment(const LineSegment& other) : x(other.x), y(other.y) {}

double LineSegment::getX() const { return x; }
double LineSegment::getY() const { return y; }

// ! - длина отрезка
double LineSegment::operator!() const {
    return std::abs(x - y);
}

// ++ (префиксный)
LineSegment& LineSegment::operator++() {
    x++;
    y++;
    return *this;
}

// Явное приведение к int
LineSegment::operator int() const {
    return static_cast<int>(x);
}

// Неявное приведение к double
LineSegment::operator double() const {
    return y;
}

// Бинарный +
LineSegment LineSegment::operator+(int d) const {
    return LineSegment(x + d, y + d);
}

// Бинарный > (проверка вхождения точки)
bool LineSegment::operator>(int d) const {
    double min_c = std::min(x, y);
    double max_c = std::max(x, y);
    return (d >= min_c && d <= max_c);
}

// Дружественная функция вывода
std::ostream& operator<<(std::ostream& os, const LineSegment& s) {
    os << "[" << s.x << "; " << s.y << "]";
    return os;
}
