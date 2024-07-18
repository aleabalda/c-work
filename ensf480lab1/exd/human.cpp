/*
 * File Name: human.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Alessandro Baldassarre & Christopher Michaud
 * Submission Date: Sept 20, 2023
 */

#include "human.h"
#include <iostream>

Human::Human(const std::string &nam, double x, double y) : location(x, y), name(nam) {}

std::string Human::get_name() const { return name; }

void Human::set_name(const std::string &new_name) { name = new_name; }

Point Human::get_point() const { return location; }

void Human::display() const
{
    std::cout << "Human Name: " << name << "\nHuman Location: "
              << location.get_x() << " ,"
              << location.get_y() << ".\n"
              << std::endl;
}
