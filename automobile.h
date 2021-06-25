/////////////////
// alimentazione
// cambio
// volumi

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include <string>


class automobile
{
public:
    automobile();
    virtual ~automobile();
    automobile(std::string,std::string,int);
    std::string virtual valutazione() = 0;
};

#endif // AUTOMOBILE_H
