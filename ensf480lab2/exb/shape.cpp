/*
 * File Name: shape.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#include "shape.h"
#include <iostream>
#include <cstring>
using namespace std;

Shape::Shape(const Point &origin, const char *name) : origin(origin)
{
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

Shape::~Shape()
{
    delete[] shapeName;
}

const Point &Shape::getOrigin() const
{
    return origin;
}

const char *Shape::getName() const
{
    return shapeName;
}

void Shape::display() const
{
    cout << "Shape Name: " << shapeName << "\n";
    cout << "X-coordinate: " << origin.getX() << "\n";
    cout << "Y-coordinate: " << origin.getY() << "\n";
}

double Shape::distance(Shape &other)
{
    return origin.distanceTo(other.getOrigin());
}

double Shape::distance(Shape &the_shape, Shape &other)
{
    return the_shape.origin.distanceTo(other.getOrigin());
}

void Shape::move(double dx, double dy)
{
    origin.setX(origin.getX() + dx);
    origin.setY(origin.getY() + dy);
}
