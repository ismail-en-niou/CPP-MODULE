#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
        int fixe;
        static const int frac =8;
    public: 
        Fixed(void);
        Fixed(const Fixed &fixe);
        Fixed &operator =(const Fixed &fix);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        ~Fixed();
};

#endif