#include "../header/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called!\n";
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog distructor called!\n";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy called!\n";
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called!\n";
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof \n";
}

void Dog::brainAddress()
{
	std::cout << &(this->_brain) << std::endl;
}