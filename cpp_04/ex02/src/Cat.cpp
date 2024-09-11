#include "../header/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called\n";
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat distructor called\n";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy called\n";
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called\n";
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow\n";
}

void Cat::brainAddress()
{
	std::cout << &(this->_brain) << std::endl;
}