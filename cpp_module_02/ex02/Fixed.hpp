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
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
        Fixed &operator=(const Fixed &fix);
        Fixed operator-(const Fixed &fix);
        Fixed operator+(const Fixed &fix);
        Fixed operator/(const Fixed &fix);
        Fixed operator*(const Fixed &fix);

        Fixed operator++(int);
        Fixed &operator++(void);
        Fixed operator--(int);
        Fixed &operator--(void);

        bool  operator<=(const Fixed &fix);
        bool  operator>=(const Fixed &fix);
        bool  operator>(const Fixed &fix) const;
        bool  operator<(const Fixed &fix) const;

        bool operator==(const Fixed &fix);
        bool operator!=(const Fixed &fix);
        static Fixed &min(Fixed &a , Fixed &b);
        static const Fixed &min(const Fixed &a , const Fixed &b);
        static Fixed &max(Fixed &a , Fixed &b);
        static const Fixed &max(const Fixed &a , const Fixed &b);
};
    std::ostream& operator<<(std::ostream &out, const Fixed &fix);


#endif