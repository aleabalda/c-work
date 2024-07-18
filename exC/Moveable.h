#ifndef MOVEABLE_H
#define MOVEABLE_H

class Moveable
{
public:
    virtual void forward() = 0;
    virtual void backward() = 0;
};

#endif // MOVEABLE_H