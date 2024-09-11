#include "../header/Ice.hpp"

//Constructor
Ice::Ice(void) : Amateria("Ice")
{
    if (0)
        std::cout << "Constructor Ice called";
}

//Distructor
Ice::~Ice()
{
    if (0)
        std::cout << "distructor Ice called";
}

Ice::Ice(const Ice &ice) : Amateria(ice)
{
    if (0)
        std::cout << "Copy constructor called\n";
    *this = ice;
}

Ice &Ice::operator=(const Ice &ice)
{
    (void)ice;
    return (*this);
}

Ice *Ice::clone() const
{
    return (new Ice(*this));//returnting new opject that is copy of the currect object
}

void Ice::use(ICharacter &target)
{
    std::cout << "Shoots an ice bolt at " << target.getName() << std::endl;
}