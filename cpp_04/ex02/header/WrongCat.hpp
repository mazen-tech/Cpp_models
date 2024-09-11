#pragma once 

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);

        void makeSound() const;
};