#include "computer.h"
#include <iostream>

computer::~computer()
{
    //dtor
}

void computer::turnOnOff()
{
    std::cout << "call computer turnOnOff " << std::endl;
}
