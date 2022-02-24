#pragma once

class EngineCapacity
{
public:
    int value_{};

    constexpr explicit EngineCapacity(int value): value_(value) {} 

    operator int() const
    {
        return value_;
    }
};

constexpr EngineCapacity operator""_ccm(unsigned long long int value)
{
    return EngineCapacity{static_cast<int>(value)};
}