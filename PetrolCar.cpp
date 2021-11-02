#include "PetrolCar.hpp"
#include <iostream>
 
PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar()         
{ 
    std::cout << __FUNCTION__ << std::endl; 
    delete engine_;
}

void PetrolCar::setEngine(PetrolEngine * engine) 
{
    engine_ = engine;
    { std::cout << __FUNCTION__ << std::endl; }
}


