//
//  Circle.cpp
//  lab4
//
//  Created by Андрей Ярема on 28.11.2024!.
//

#include "Circle.hpp"
#include <iostream>

int Circle::count = 0;

Circle::Circle() : x(0), y(0), radius(0),id(++count) {}

Circle::Circle(double x, double y, double radius) : x(x), y(y), radius(radius), id (++count) {}

Circle::Circle(const Circle& other) : x(other.x), y(other.y), radius(other.radius), id (++count) {}

Circle::~Circle() {
    count--;
}

Circle& Circle::operator=(const Circle& other) {
    if (this == &other) {
        return *this;
    }
    x = other.x;
    y = other.y;
    radius = other.radius;
    return *this;
}

void Circle::display() const {
    std::cout << "Окружность: Центр(" << x << ", " << y << "), Радиус: " << radius << ", ID: " << id << std::endl;
}

Circle Circle::operator*(const Circle& other) const {
    double distance = std::sqrt(std::pow(x - other.x, 2) + std::pow(y - other.y, 2));
    if (distance > radius + other.radius || distance < std::abs(radius - other.radius)) {
        return Circle(0, 0, 0);
    } else {
        double newRadius = std::min(radius, other.radius);
        double newX = (x + other.x) / 2;
        double newY = (y + other.y) / 2;
        return Circle(newX, newY, newRadius);
    }
}

Circle Circle::operator+(const Circle& other) const {
    double newRadius = radius + other.radius;
    double newX = (x + other.x) / 2;  // Средняя точка по X
    double newY = (y + other.y) / 2;  // Средняя точка по Y
    return Circle(newX, newY, newRadius);
}

double Circle::getX() const { return x; }
double Circle::getY() const { return y; }
double Circle::getRadius() const { return radius; }

int Circle::getCount() {
    return count;
}

int Circle::getId() const {
    return id;
}

