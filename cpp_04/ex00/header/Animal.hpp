#pragma once 

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
        Animal(const std::string &type);

    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();//virtual is a keyword ensures that the class's destructor is called first + clean up resorces

        virtual void makeSound() const;
        std::string getType() const;

};