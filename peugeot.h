#ifndef PEUGEOT_H
#define PEUGEOT_H
#include "automobile.h"
#include <iostream>

class peugeot : public automobile
{
public:
    peugeot();
    ~peugeot() override;
    std::string valutazione() override;

};

#endif // PEUGEOT_H
