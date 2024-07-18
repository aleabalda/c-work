/*
 * File Name: curveCut.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 11, 2:00 PM
 */

#ifndef CURVECUT_H
#define CURVECUT_H
#include "rectangle.h"
#include "circle.h"

class CurveCut : public Rectangle, public Circle
{
public:
    CurveCut(const Point &origin, const char *name, double width, double length, double radius);
    CurveCut(const CurveCut &other);
    CurveCut &operator=(const CurveCut &other);
    virtual double area() const;
    virtual double perimeter() const;
    virtual void display() const;
};

#endif // CURVECUT_H