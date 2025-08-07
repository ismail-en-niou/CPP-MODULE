#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixe;
        static const int frac =8;
    public: 
        Fixed(void);
        Fixed(const Fixed &fixe);
        Fixed(const int n);
        Fixed(const float n);
        Fixed &operator=(const Fixed &fix);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};
    std::ostream& operator<<(std::ostream &out, const Fixed &fix);


#endif