#pragma once

class Power
{
public:
    int value_{};

    constexpr explicit Power(int value): value_(value) {} 

    operator int() const
    {
        return value_;
    }
};

constexpr Power operator""_hp(unsigned long long int value)
{
    return Power{static_cast<int>(value)};
}