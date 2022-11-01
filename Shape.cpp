#include "Shape.h"

Shape::Shape(int w, int h) {
	width = w;
	height = h;

}
int Shape::area() {
	return getHeight() * getWidth();
}
int Shape::getHeight() { return height; }
int Shape::getWidth() { return width; }