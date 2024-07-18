/*
 * File Name: circle.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 11, 2:00 PM
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : virtual public Shape
{
private:
    double radius;

public:
    Circle(const Point &origin, double radius, const char *name);
    Circle(const Circle &other);
    Circle &operator=(const Circle &other);
    void setRadius(int radius);
    double getRadius() const;
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
};

#endif