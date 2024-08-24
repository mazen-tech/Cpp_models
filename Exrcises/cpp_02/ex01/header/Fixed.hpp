#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int FP;
        static const int num_fr = 8;

    public:
        Fixed(void); // default constructor
        ~Fixed();  // destructor
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);

        Fixed(const int Ipara); //ex01 constructor that takes a constant integer
        Fixed(const float Fpara); //ex01  constructor that takes a constant floating-point number


        float toFloat( void ) const; //ex01
        int toInt( void ) const;//ex01

        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

    std::ostream &operator<<(std::ostream &out, const Fixed &object);
#endif