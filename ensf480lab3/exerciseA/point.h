/*
 * File Name: point.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Alessandro Baldassarre
 * Submission Date: Wednesday, October 2, 2:00 PM
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x;
    double y;
    int id;
    static int counter;

public:
    Point(double x, double y);
    Point(const Point &other);
    Point &operator=(const Point &other);
    void display() const;
    static int getCounter();
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    static double distance(const Point &p1, const Point &p2);
    virtual double distanceTo(const Point &p);
};

#endif // POINT_H
