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

Point::Point(const Point &other)
{
    this->x = other.getX();
    this->y = other.getY();
    this->id = counter++;
}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->x = other.getX();
        this->y = other.getY();
    }
    return *this;
}

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
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double Point::distanceTo(const Point &p)
{
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
