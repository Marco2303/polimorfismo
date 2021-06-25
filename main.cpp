#include <iostream>
#include "automobile.h"
#include "fiat.h"
#include "ford.h"
#include "peugeot.h"
#include "f500.h"
#include "panda.h"


void funcgenerica(automobile *a){
    std::cout << "Richiamo la valutazione da funziona ---> " << a->valutazione() << "\n";
    delete a;
}

void funcgenericaref(automobile &a){
    std::cout << "Richiamo la valutazione da funziona ---> " << a.valutazione() << "\n";
}

int main()
{

    //passaggio by reference
    peugeot *a1 = new peugeot();
    automobile &newauto = *a1;
    funcgenericaref(newauto);


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

    funcgenerica(new F500());

    std::cout << "Fine programma\n";

    return 0;
}
