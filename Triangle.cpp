#include "Triangle.h"

/// <summary>
/// Triangle Constructor - passes values into the parent constructor
/// </summary>
/// <param name="h">height of shape</param>
/// <param name="w">width of shape</param>
Triangle::Triangle(int h, int w) : Shape(h, w) {};

/// <summary>
/// Calculates the area of a triangle by dividing shape area by 2
/// </summary>
/// <returns>area of the triangle</returns>
int Triangle::area() {
	return Shape::area() / 2;
}
