#include "../header/Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called \n";
}
Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy called\n";
    *this = copy;
}
Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignation operator called\n";
    if (this != &copy)
        type = copy.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const
{
    std::cout << "Animal sound\n";
}
std::string Animal::getType() const
{
    return (type);
}