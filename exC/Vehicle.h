#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
#include "moveable.h"
#include "resizeable.h"
using namespace std;

class Vehicle : public Moveable, Resizable
{
protected:
    string name;

public:
    Vehicle(string name) : name(name) {}
    void move();
    void forward() override;
    void backward() override;
    void enlarge(int n) override;
    void shrink(int n) override;
};

#endif // VEHICLE_H