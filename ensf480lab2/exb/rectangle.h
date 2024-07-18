/*
 * File Name: rectangle.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square
{
private:
    double side_b;

public:
    Rectangle(const Point &origin, const char *name, double side_a, double side_b);
    double area() const;
    double perimeter() const;
    double getSideB() const;
    void setSideB(double side_b);
    void display() const;
};

#endif