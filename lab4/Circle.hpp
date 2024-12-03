//
//  Circle.hpp
//  lab4
//
//  Created by Андрей Ярема on 28.11.2024.
//

#ifndef Circle_hpp
#define Circle_hpp
#include <stdio.h>

class Circle{
    
private:
    double x;
    double y;
    double radius;
    static int count;
    const int id;

public:
    Circle();
    Circle(double x, double y, double radius);
    Circle(const Circle& otherCircle);
    ~Circle();
    
    Circle& operator=(const Circle& otherCircle);
    Circle operator+(const Circle& otherCircle) const;
    Circle operator*(const Circle& otherCircle) const;
    
    void display() const;
    double getX() const;
    double getY() const;
    double getRadius() const;
    static int getCount();
    int getId() const;

};

#endif /* Circle_hpp */
