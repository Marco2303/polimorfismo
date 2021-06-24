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
    ~automobile();
    automobile(std::string,std::string,int);
    std::string virtual valutazione();
};

#endif // AUTOMOBILE_H
