#include "ford.h"
#include <iostream>

ford::ford()
{
    std::cout << "Costruttore ford\n";
}
ford::~ford()
{
    std::cout << "distruttore ford\n";
}

std::string ford::valutazione()
    {
        return "Ford valutazione\n";
    }

