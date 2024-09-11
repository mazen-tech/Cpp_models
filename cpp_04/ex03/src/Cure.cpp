#include "../header/Cure.hpp"

//constructor
Cure::Cure(void) : Amateria("Cure")
{
    if (0)//always false conditon
        std::cout << "Cure constructor called\n";
}

//distructor
Cure::~Cure()
{
    if (0)//always false just for clarefication
        std::cout << "Cure destructor called\n";
}

//copy
Cure::Cure(const Cure &cure) :  Amateria(cure)
{
    if (0)
        std::cout << "copy constructor called\n";
    *this = cure; 
}

//assignation operator
Cure &Cure::operator=(const Cure &cure)
{
    if (0)
        std::cout << "Assignation operator called\n";
    (void)cure;
    return (*this);
    
}

Cure *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << " heals " << target.getName() << "'s wounds \n";
}