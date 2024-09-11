#pragma once 

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      // Black
#define RED     "\033[31m"      // Red
#define GREEN   "\033[32m"      // Green
#define YELLOW  "\033[33m"      // Yellow
#define BLUE    "\033[34m"      // Blue
#define MAGENTA "\033[35m"      // Magenta
#define CYAN    "\033[36m"      // Cyan
#define WHITE   "\033[37m"      // White

#include <iostream>
#include <string>

class Animal 
{
    protected:
        std::string type;
        //Animal(const std::string &type);

    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();//virtual is a keyword ensures that the class's destructor is called first + clean up resorces

        virtual void makeSound() const;
        std::string getType() const;

};