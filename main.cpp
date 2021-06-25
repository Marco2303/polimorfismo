#include <iostream>
#include "automobile.h"
#include "fiat.h"
#include "ford.h"
#include "peugeot.h"
#include "f500.h"

int main()
{

    //automobile *autom = new automobile();
    automobile *autom;


     autom = new fiat();

    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;

    autom = new ford();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;

    autom = new peugeot();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;

    autom = new F500();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;

    std::cout << "Fine programma\n";
    return 0;
}
