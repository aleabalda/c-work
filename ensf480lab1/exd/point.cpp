/*
 * File Name: point.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Alessandro Baldassarre & Christopher Michaud
 * Submission Date: Sept 20, 2023
 */

#include "point.h"

Point::Point(double a, double b) : x(a), y(b) {}

double Point::get_x() const { return x; }

double Point::get_y() const { return y; }

void Point::set_x(double a) { x = a; }

void Point::set_y(double a) { y = a; }
