#ifndef FORD_H
#define FORD_H

#include "automobile.h"

class ford : public automobile
{
public:
    ford();
    ~ford() override;
    std::string valutazione() override;
};

#endif // FORD_H
