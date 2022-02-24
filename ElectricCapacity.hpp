#pragma once

class ElectricCapacity
{
public:
    int value_{};

    constexpr explicit ElectricCapacity(int value): value_(value) {} 

    operator int() const
    {
        return value_;
    }
};

constexpr ElectricCapacity operator""_Ah(unsigned long long int value)
{
    return ElectricCapacity{static_cast<int>(value)};
}