#ifndef F500_H
#define F500_H

#include "fiat.h"

class F500 : public fiat
{
public:
    F500();
    ~F500() override;
    std::string valutazione() override;

};

#endif // F500_H
