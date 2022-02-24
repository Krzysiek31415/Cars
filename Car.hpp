#pragma once
#include "Engine.hpp"
#include "Speed.hpp"
class Car
{
public:
    Car();

    Car(const Car & ) = default;
    Car(Car && ) = default;

    Car & operator=(const Car &) = default;
    Car & operator=(Car &&) = default;

    virtual ~Car();
    
    void turnLeft();
    void turnRight();
    void brake();
    void accelerate(Speed speed);
    void refuel();
};