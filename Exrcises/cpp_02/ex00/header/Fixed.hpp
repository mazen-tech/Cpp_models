#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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


        int getRawBits( void ) const;
        void setRawBits( int const raw );

};


#endif