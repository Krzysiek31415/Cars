#pragma once

class Speed
{
public:
    int value_{};

    constexpr explicit Speed(int value): value_(value) {} 

    operator int() const
    {
        return value_;
    }
};

constexpr Speed operator""_km_h(unsigned long long int value)
{
    return Speed{static_cast<int>(value)};
}