#include "peugeot.h"
#include <iostream>


peugeot::peugeot()
{
    std::cout << "Costruttore Peugeot\n";
}
peugeot::~peugeot()
{
    std::cout << "distruttore peugeot\n";
}

std::string peugeot::valutazione(){

    return "Valutazione Peugeot\n";
}
