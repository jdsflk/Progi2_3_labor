#pragma once

#include "../rectangle/rectangle.h"
#include "../circle/circle.h"

class BoundingCircle {
    Rectangle innerSquare;
    Circle outerCircle;

    double getArea();
    double getPerimeter();

public:
    BoundingCircle();
    BoundingCircle(double);

    void print();

    Circle getOuterCircle();
    Rectangle getInnerRectangle();

    void printCalculatedValues();
};
