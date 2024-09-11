#include "../header/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<< "WrongCat contructor called\n";
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat distructor called\n";
}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout<< "WrongCat copy called\n";
    *this = copy;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout<< "WrongCat assignation operator called\n";
    if (this != &copy)
        type = copy.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout<< "Plaw Plaw Plaw I'm a fack cat \n";
}