#include "Shape.h"

/// <summary>
/// Shape Constructor
/// </summary>
/// <param name="w">Width of shape</param>
/// <param name="h">Height of Shape</param>
Shape::Shape(int w, int h) {
	width = w;
	height = h;

}
/// <summary>
/// Calculates area of a basic shape i.e rectangle
/// </summary>
/// <returns>Width * Height of shape</returns>
int Shape::area() {
	return getHeight() * getWidth();
}

//Getters for height and width
int Shape::getHeight() { return height; }
int Shape::getWidth() { return width; }