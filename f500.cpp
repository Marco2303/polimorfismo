#include "f500.h"
#include <iostream>


F500::F500()
{
    std::cout << "Costruttore f500\n";
}
F500::~F500()
{
    std::cout << "Distruttore f500\n";
}
std::string F500::valutazione(){
    return "modello Fiat 500\n";
}
