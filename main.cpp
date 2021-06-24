#include <iostream>
#include "automobile.h"
#include "fiat.h"
#include "ford.h"
#include "peugeot.h"

int main()
{

    automobile *autom = new automobile();


    autom = new fiat();

    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;

    autom = new ford();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;


    autom = new peugeot();
    std::cout << "da maint richiamo il metodo override di ---> " << autom->valutazione() << std::endl;


    return 0;
}
