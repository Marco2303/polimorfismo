#ifndef FIAT_H
#define FIAT_H

#include "automobile.h"
#include <iostream>

class fiat : public automobile
{
public:
    fiat();
    ~fiat() override;
    std::string valutazione() override;
};

#endif // FIAT_H
