#include "automobile.h"
#include <string>
#include <iostream>

automobile::automobile()
{
    std::cout << "Costruttore automobile senza parametro\n";

}
automobile::~automobile()
{
    std::cout << "Distruttore automobile\n";

}
automobile::automobile(std::string alimentazione, std::string cambio, int volumi)
{
    std::cout << "Costruttore automobile con parametri\n";

}

std::string automobile::valutazione(){

    return "Valutazione automobile\n";

}
