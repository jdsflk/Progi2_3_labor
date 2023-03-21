#include "rectangle.h"
#include <cstdio>

Rectangle::Rectangle(double value1, double value2) {
    setA(value1);
    setB(value2);
}

Rectangle::Rectangle(double value) {
    setA(value);
    setB(value);
}

Rectangle::Rectangle() {
    setA(0);
    setB(0);
}

double Rectangle::getA() {
    return a;
}

double Rectangle::getB() {
    return b;
}

void Rectangle::setA(double value) {
    if(value >= 0) {
        a = value;
    }
}

void Rectangle::setB(double value) {
    if(value >= 0) {
        b = value;
    }
}

double Rectangle::getArea() {
    return a * b;
}

double Rectangle::getPerimeter() {
    return 2*(a+b);
}

void Rectangle::print() {
    printf("a: %lf b: %lf\n", a, b);
}