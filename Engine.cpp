#include "Engine.hpp"
#include <iostream>

Engine::Engine(Power power): power_(power){std::cout << __FUNCTION__ << std::endl;}
Engine::~Engine(){std::cout << __FUNCTION__ << std::endl;}
