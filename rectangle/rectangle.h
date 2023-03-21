#pragma once
class Rectangle {
    double a;
    double b;
public:
    Rectangle(double, double);
    Rectangle(double);
    Rectangle();

    double getA();
    double getB();

    void setA(double);
    void setB(double);

    double getArea();
    double getPerimeter();

    void print();
};
