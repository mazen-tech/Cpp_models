#include "../header/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called \n";
    this->FP = 0;
}


Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called \n";
    *this = copy;//pointer to the ref copy
}

Fixed::~Fixed()
{
    std::cout << "Destructor called \n";
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called \n";
    this->FP = copy.getRawBits();
    return *this; //here we returning the pointer to ref copy
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called \n";
    return (this->FP);
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called \n";
    this->FP = raw;
}