#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car final : public Vehicle
{
private:
    int seats;

public:
    void turn();
};

#endif // CAR_H