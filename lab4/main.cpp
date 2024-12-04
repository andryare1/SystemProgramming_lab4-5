//
//  main.cpp
//  lab4
//
//  Created by Андрей Ярема on 28.11.2024.
//

#include <iostream>
#include "Circle.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
   
    cout << "Начальное количество объектов: " << Circle::getCount() << endl;
    Circle circle1(0, 0, 33);
    Circle circle2(0, 4, 6);

    circle1.display();
    cout << "ID объекта circle1: " << circle1.getId() << endl;
    circle2.display();
    cout << "ID объекта circle2: " << circle2.getId() << endl;
    
    cout << circle1.getCount()<< endl;
    cout << circle2.getCount() << endl;
    cout << "Количество объектов после создания: " << Circle::getCount() << endl;
    

    Circle intersection = circle1 * circle2;
    cout << "Пересечение окружности 1 и окружности 2: ";
    intersection.display();

    Circle unionCircle = circle1 + circle2;
    cout << "Объединение окружности 1 и окружности 2: ";
    unionCircle.display();
    cout << unionCircle.getCount()<< endl;
    
    cout << "Количество объектов после создания новых окружностей: " << Circle::getCount() << endl;
    int q = 0;
    cin >> q;
    return 0;
}
