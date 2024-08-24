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
        Fixed(const int Ipara); //ex01 constructor that takes a constant integer
        Fixed(const float Fpara); //ex01  constructor that takes a constant floating-point number
        Fixed &operator=(const Fixed &copy);


        bool operator>(const Fixed &obj) const;
        bool operator<(const Fixed &obj) const;
        bool operator>=(const Fixed &obj) const;
        bool operator<=(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const;
        bool operator!=(const Fixed &obj) const;

        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;

        //(pre & post) inc and dec
        Fixed operator++(void);
        Fixed operator++(int value);
        Fixed operator--(void);
        Fixed operator--(int value);

        //function ex02
        static Fixed &min(Fixed &mi, Fixed &ma);
        static Fixed &max(Fixed &mi, Fixed &ma);
        static const Fixed &min(const Fixed &mi, const Fixed &ma);
        static const Fixed &max(const Fixed &mi, const Fixed &ma);

        float toFloat( void ) const; //ex01
        int toInt( void ) const;//ex01

        int getRawBits( void ) const;
        void setRawBits( int const raw );

};

    std::ostream &operator<<(std::ostream &out, const Fixed &object);
#endif