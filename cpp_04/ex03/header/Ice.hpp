#pragma once 
#include "Amateria.hpp"

class Ice : public Amateria
{
public:
    Ice(void);
    virtual ~Ice();
    Ice(const Ice &ice);
    Ice &operator=(const Ice &ice);//to allow one Ice object to be assigned to another

    Ice *clone() const;
    void use(ICharacter &target);
};

