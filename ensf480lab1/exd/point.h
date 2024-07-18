/*
 * File Name: point.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Alessandro Baldassarre & Christopher Michaud
 * Submission Date: Sept 20, 2023
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x; // x coordinate of a location on Cartesian Plane
    double y; // y coordinate of a location on Cartesian Plane

public:
    Point(double a = 0, double b = 0);
    double get_x() const;
    double get_y() const;
    void set_x(double a);
    void set_y(double a);
};

#endif // POINT_H
