#pragma once
#include "Engine.hpp"
#include "ElectricCapacity.hpp"

class ElectricEngine : public Engine
{
public:
    ElectricEngine(Power power, ElectricCapacity batteryCapacity);

    ElectricEngine(ElectricEngine const &) = default;
    ElectricEngine(ElectricEngine &&) = default;

    ElectricEngine & operator=(ElectricEngine const &) = default;
    ElectricEngine & operator=(ElectricEngine &&) = default;

    ~ElectricEngine() override;
    
    ElectricCapacity getBatteryCapacity() const { return batteryCapacity_; }

    friend std::ostream & operator<<(std::ostream & out, ElectricEngine const & engine);

private:
    ElectricCapacity batteryCapacity_;   // in Ah
};

