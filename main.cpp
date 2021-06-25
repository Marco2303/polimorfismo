#include <iostream>
#include "automobile.h"
#include "fiat.h"
#include "ford.h"
#include "peugeot.h"
#include "f500.h"
#include "panda.h"

int main()
{

    //automobile *autom = new automobile();
    automobile *autom;


    autom = new fiat();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;
    delete autom;

    autom = new ford();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;
    delete autom;

    autom = new peugeot();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;
    delete autom;

    autom = new F500();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;
    delete autom;

    autom = new panda();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;
    delete autom;

    std::cout << "Fine programma\n";

    return 0;
}
