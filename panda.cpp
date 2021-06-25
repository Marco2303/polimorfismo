#include "panda.h"
#include <iostream>

panda::panda()
{
    std::cout << "costruttore panda\n";
}
panda::~panda()
{
    std::cout << "Distruttore panda\n";
}

std::string panda::valutazione(){
    return "valutazione panda\n";
}
