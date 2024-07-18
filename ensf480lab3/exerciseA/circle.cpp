/*
 * File Name: circle.cpp
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 11, 2:00 PM
 */

#include "circle.h"
#include <iostream>
#define PI 3.14159265358979323846
using namespace std;

Circle::Circle(const Point &origin, double radius, const char *name)
    : Shape(origin, name), radius(radius) {}

void Circle::setRadius(int radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return this->radius;
}

double Circle::area() const
{
    return PI * (this->radius * this->radius);
}

double Circle::perimeter() const
{
    return 2 * PI * this->radius;
}

void Circle::display() const
{
    Shape::display();
    cout << "Radius: " << radius << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}