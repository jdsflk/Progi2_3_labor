#pragma once
class Circle {
    double radius;
public:
    Circle();
    Circle(double);

    double getRadius();
    void setRadius(double);

    double getCircumference();
    double getArea();

    void print();
};