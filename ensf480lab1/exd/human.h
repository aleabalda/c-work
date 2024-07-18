/*
 * File Name: human.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Alessandro Baldassarre & Christopher Michaud
 * Submission Date: Sept 20, 2023
 */

#ifndef HUMAN_H
#define HUMAN_H

#include "point.h"
#include <string>

class Human
{
private:
    Point location;   // Location of an object of Human on a Cartesian Plane
    std::string name; // Human's name

public:
    Human(const std::string &nam = "", double x = 0, double y = 0);
    std::string get_name() const;
    void set_name(const std::string &name);
    Point get_point() const;
    void display() const;
};

#endif // HUMAN_H
