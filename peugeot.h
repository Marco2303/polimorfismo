#ifndef PEUGEOT_H
#define PEUGEOT_H
#include "automobile.h"
#include <iostream>

class peugeot : public automobile
{
public:
    peugeot();
    std::string valutazione() override;

};

#endif // PEUGEOT_H
