/*
 * File Name: curveCut.cpp
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 11, 2:00 PM
 */

#include "curveCut.h"
#include <iostream>
using namespace std;

CurveCut::CurveCut(const Point &origin, const char *name, double width, double length, double radius)
    : Shape(origin, name), Rectangle(origin, name, width, length), Circle(origin, radius, name)
{
    if (radius > width / 2 || radius > length / 2)
    {
        cerr << "Error: Radius is too large for given width and/or length.\n";
        exit(EXIT_FAILURE);
    }
}

CurveCut::CurveCut(const CurveCut &other) : Shape(other), Rectangle(other), Circle(other) {}

CurveCut &CurveCut::operator=(const CurveCut &other)
{
    Rectangle::operator=(other);
    Circle::operator=(other);
    return *this;
}

double CurveCut::area() const
{
    return Rectangle::area() - (Circle::area() / 4);
}

double CurveCut::perimeter() const
{
    return Rectangle::perimeter() - 2 * Circle::getRadius();
}

void CurveCut::display() const
{
    Shape::display();
    cout << "Width: " << getSideA() << "\n";
    cout << "Length: " << getSideB() << "\n";
    cout << "Radius of the cut: " << getRadius() << "\n";
}
