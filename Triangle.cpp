#include "Triangle.h"

Triangle::Triangle(int h, int w) : Shape(h, w) {};

int Triangle::area() {
	return Shape::area() / 2;
}
