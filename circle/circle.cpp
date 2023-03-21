#include "circle.h"
#include <cstdio>
#include <cmath>

Circle::Circle() {
    setRadius(0);
}

Circle::Circle(double value) {
    setRadius(value);
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double value) {
    if(value >= 0) {
        radius = value;
    }
}

double Circle::getCircumference() {
    return 2*radius*M_PI;
}

double Circle::getArea() {
    return radius*radius*M_PI;
}

void Circle::print() {
    printf("radius: %lf\n", radius);
}