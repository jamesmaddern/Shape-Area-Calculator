// Shape Area Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"

int main()
{
    
    Triangle t(10,5);   //Create an instance of a triangle
    Rectangle r(2,3);   //Create an instance of a rectangle
    std:: cout << t.area() << "\n";
    std::cout << r.area();

}
