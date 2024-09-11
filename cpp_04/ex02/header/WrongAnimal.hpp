#pragma once 

#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);

        virtual void makeSound() const;
        std::string getType() const;
};