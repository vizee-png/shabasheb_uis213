﻿#include <iostream>
#include <stdexcept>

class Pair
{
protected:
    int x, y;
public:
    Pair(int x_ = 0, int y_ = 0) : x(x_), y(y_) {}
    void Set(int x_, int y_)
    {
        x = x_;
        y = y_;
        return;
    }
    int Prod()
    {
        return x * y;
    }
};

class Rectangle : protected Pair
{
public:
    Rectangle(int x_ = 1, int y_ = 1) : Pair(x_, y_)
    {
        if (x_ <= 0 || y_ <= 0) throw std::invalid_argument("arguments must be greater zero\n");
    }
    int Perimeter()
    {
        return 2 * (x + y);
    }
    int Area()
    {
        return Prod();
    }
};

int main()
{
    Rectangle r(1, 3);
    std::cout << r.Perimeter();
    return 0;
}