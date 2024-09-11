#pragma once 
#include "Amateria.hpp"

class Cure : public Amateria
{
public:
    Cure(void);
    virtual ~Cure();
    Cure(const Cure &cure);
    Cure &operator=(const Cure &cure);//to allow one Cure opeject to be assigned to another 

    Cure *clone() const;
    void use(ICharacter &target);
};