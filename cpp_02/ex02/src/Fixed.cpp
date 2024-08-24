#include "../header/Fixed.hpp"
const std::string GREEN = "\033[32m";
const std::string RESET = "\033[0m";

Fixed::Fixed(void) 
{
    //std::cout << "Default constructor called \n";
    this->FP = 0;
}


Fixed::Fixed(const Fixed &copy)
{
    //std::cout << "Copy constructor called \n";
    *this = copy;//pointer to the ref copy
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called \n";
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    //std::cout << "Copy assignment operator called \n";
    this->FP = copy.getRawBits();
    return *this; //here we returning the pointer to ref copy
}

int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called \n";
    return (this->FP);
}
void Fixed::setRawBits( int const raw )
{
    //std::cout<< "setRawBits member function called \n";
    this->FP = raw;
}



/*ex01 part*/
/*FLOAT*/
Fixed::Fixed(const float Fpara)
{
    //std::cout << "Constructor with FLOAT parameter called\n";
    this->FP = roundf(Fpara * (1 << this->num_fr));
    //std::cout << GREEN << "FLOAT conversion [OK]\n" << RESET;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->FP / (float)(1 << this->num_fr));
}


/*INT*/
Fixed::Fixed(const int Ipara)
{
    //std::cout << "Constructor with INT parameter called\n";
    this->FP = Ipara * (1 << this->num_fr);
    //std::cout << GREEN << "INT conversion [OK]\n" << RESET;
}

int Fixed::toInt( void ) const
{
    return ((int)this->FP >> this->num_fr);

}

std::ostream &operator<<(std::ostream &outputStream, const Fixed &object)
{
	outputStream << object.toFloat();
	return (outputStream);
}


//comparsion
bool Fixed::operator>(const Fixed &obj) const
{
    return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
    return(this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return(this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return(this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
    return(this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return(this->getRawBits() != obj.getRawBits());
}

//Arithmatics
Fixed Fixed::operator+(const Fixed &obj) const
{
    return(Fixed(this->toFloat() + obj.toFloat()));
}
Fixed Fixed::operator-(const Fixed &obj) const
{
    return(Fixed(this->toFloat() - obj.toFloat()));
}
Fixed Fixed::operator*(const Fixed &obj) const
{
    return(Fixed(this->toFloat() * obj.toFloat()));
}
Fixed Fixed::operator/(const Fixed &obj) const
{
    return(Fixed(this->toFloat() / obj.toFloat()));
}


//pre and post inc and dec
Fixed Fixed::operator++(void)
{
    this->FP++;
    return (*this);
}
Fixed Fixed::operator++(int value)
{
    Fixed temp(*this);
    (void)value;
    ++(*this);
    return (temp);
}
Fixed Fixed::operator--(void)
{
    this->FP--;
    return (*this);
}
Fixed Fixed::operator--(int value)
{
    Fixed temp(*this);
    (void)value;
    --(*this);
    return (temp);
}


//functions ex02
Fixed &Fixed::min(Fixed &mi, Fixed &ma)
{
    return (mi < ma) ? mi : ma;
}
Fixed &Fixed::max(Fixed &mi, Fixed &ma)
{
    return (mi > ma) ? mi : ma;
}
const Fixed &Fixed::min(const Fixed &mi, const Fixed &ma)
{
    return (mi < ma) ? mi : ma;
}
const Fixed &Fixed::max(const Fixed &mi, const Fixed &ma)
{
    return (mi > ma) ? mi : ma;
}