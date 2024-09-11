#include "../header/Amateria.hpp"

Amateria::Amateria(void) : Type("UNKNOWN") {}

Amateria::~Amateria() {}

Amateria::Amateria(const std::string &type) : Type(type) {}

Amateria::Amateria(const Amateria &Am) { *this = Am; }

Amateria &Amateria::operator=(const Amateria &Am)
{
    if (this != &Am)
        Type = Am.Type;
    return (*this);
}

std::string const &Amateria::getType() const { return Type; }

void Amateria::use(ICharacter& target)
{
    std::cout << "is doing sth weird on " << target.getName() << std::endl;
}