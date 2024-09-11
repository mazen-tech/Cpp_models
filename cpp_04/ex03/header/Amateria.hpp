#pragma once 
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class Amateria
{
protected:
    std::string Type;
public:
    Amateria(void);
    ~Amateria();
    Amateria(const std::string &type);
    Amateria(const Amateria &Am);
    Amateria &operator=(const Amateria &Am);

    std::string const &getType() const;
    
    virtual Amateria* clone() const = 0;
    virtual void use(ICharacter& target);
};


std::string embed(const std::string std, const std::string color, int size = 11);