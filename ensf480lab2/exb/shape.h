/*
 * File Name: shape.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape
{
private:
    Point origin;
    char *shapeName;

public:
    Shape(const Point &origin, const char *name);
    ~Shape();
    const Point &getOrigin() const;
    const char *getName() const;
    void display() const;
    double distance(Shape &other);
    static double distance(Shape &the_shape, Shape &other);
    void move(double dx, double dy);
};

#endif // SHAPE_H
