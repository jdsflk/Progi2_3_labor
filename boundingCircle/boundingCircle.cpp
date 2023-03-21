#include "boundingCircle.h"
#include <cmath>
#include <cstdio>

BoundingCircle::BoundingCircle() {
    innerSquare.setA(1);
    innerSquare.setB(1);

    outerCircle.setRadius(sqrt(2)/2);
}

BoundingCircle::BoundingCircle(double side) {
    innerSquare.setA(side);
    innerSquare.setB(side);

    outerCircle.setRadius(side * sqrt(2)/2);
}

void BoundingCircle::print() {
    innerSquare.print();
    outerCircle.print();
}

double BoundingCircle::getArea() {
    return outerCircle.getArea() - innerSquare.getArea();
}

double BoundingCircle::getPerimeter() {
    return outerCircle.getCircumference() + innerSquare.getPerimeter();
}

void BoundingCircle::printCalculatedValues() {
    printf("Perimeter: %lf, area: %lf\n\n", getPerimeter(), getArea());
}