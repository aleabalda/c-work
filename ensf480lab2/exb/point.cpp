/*
 * File Name: point.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#include "point.h"
#include <cmath>
#include <iostream>
using namespace std;

int Point::counter = 1000;

Point::Point(double x, double y) : x(x), y(y), id(++counter) {}

void Point::display() const
{
    cout << "X-coordinate: " << x << "\n";
    cout << "Y-coordinate: " << y << "\n";
}

int Point::getCounter()
{
    return counter - 1000;
}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::distance(const Point &p1, const Point &p2)
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

double Point::distanceTo(const Point &p) const
{
    double dx = x - p.x;
    double dy = y - p.y;
    return sqrt(dx * dx + dy * dy);
}
