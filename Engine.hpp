#pragma once
#include "Engine.hpp"
#include <iostream>
#include "Power.hpp"

class Engine 
{
public:
    Engine(Power power);

    Engine(const Engine &) = default;
    Engine(Engine &&) = default;

    Engine & operator=(const Engine &) = default;
    Engine & operator=(Engine &&) = default;

    virtual ~Engine();

    void setPower(Power power){ power_ = power; }
    Power getPower() const {return power_; }

private:
    Power power_;             // in HP 
};