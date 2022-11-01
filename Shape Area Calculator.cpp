// Shape Area Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"

int main()
{
    //Triangle t();
    Triangle t(10,5);
    Rectangle r(2,3);
    std:: cout << t.area() << "\n";
    std::cout << r.area();

}
