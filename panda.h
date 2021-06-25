#ifndef PANDA_H
#define PANDA_H

#include "fiat.h"
#include <iostream>

class panda : public fiat
{
public:
    panda();
    ~panda() override;
    std::string valutazione() override final; //versione finale della funzione
};

#endif // PANDA_H
