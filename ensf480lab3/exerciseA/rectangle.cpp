/*
 * File Name: rectangle.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(const Point &origin, const char *name, double side_a, double side_b)
    : Shape(origin, name), Square(origin, name, side_a), side_b(side_b) {}

Rectangle::Rectangle(const Rectangle &other) : Shape(other), Square(other.getOrigin(), other.getName(), other.getSideA())
{
    this->side_b = other.getSideB();
};

Rectangle &Rectangle::operator=(const Rectangle &other)
{
    if (this != &other)
    {
        this->side_b = other.getSideB();
        Square::operator=(other);
    }
    return *this;
};

double Rectangle::area() const
{
    return getSideA() * side_b;
}

double Rectangle::perimeter() const
{
    return 2 * (getSideA() + side_b);
}

double Rectangle::getSideB() const
{
    return side_b;
}

void Rectangle::setSideB(double side_b)
{
    this->side_b = side_b;
}

void Rectangle::display() const
{
    Shape::display();
    cout << "Side b: " << side_b << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}
