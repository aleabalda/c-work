/*
 * File Name: square.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#include "square.h"
#include <iostream>
using namespace std;

Square::Square(const Point &origin, const char *name, double side_a)
    : Shape(origin, name), side_a(side_a) {}

Square::Square(const Square &other) : Shape(other.getOrigin(), other.getName())
{
    this->side_a = other.getSideA();
};

Square &Square::operator=(const Square &other)
{
    if (this != &other)
    {
        this->side_a = other.getSideA();
        Shape::operator=(other);
    }
    return *this;
}

double Square::area() const
{
    return side_a * side_a;
}

double Square::perimeter() const
{
    return 4 * side_a;
}

double Square::getSideA() const
{
    return side_a;
}

void Square::setSideA(double side_a)
{
    this->side_a = side_a;
}

void Square::display() const
{
    Shape::display();
    cout << "Side a: " << side_a << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}
