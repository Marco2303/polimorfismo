#include "fiat.h"
#include <iostream>

fiat::fiat()
{
    std::cout << "costruttore fiat\n";
}
fiat::~fiat()
{
    std::cout << "distruttore fiat\n";
}
std::string fiat::valutazione()
    {
        return "Fiat valutazione\n";
    }

