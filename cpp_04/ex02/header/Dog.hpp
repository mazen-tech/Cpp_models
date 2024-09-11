#pragma once 

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);

        void makeSound() const;
        void brainAddress();

};