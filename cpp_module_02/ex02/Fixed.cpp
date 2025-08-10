#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() : fixe(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->fixe = f.getRawBits();
}

int Fixed::getRawBits(void) const
{
    return this->fixe;
}

void Fixed::setRawBits(int const raw)
{
    this->fixe = raw;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fix)
    {
        this->fixe = fix.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const int n)
{
    // std::cout << "Int constructor called" << std::endl;
    this->fixe = n << this->frac;
}

Fixed::Fixed(const float n)
{
    // std::cout << "Float constructor called" << std::endl;
    this->fixe = roundf(n * (1 << this->frac));
}

float Fixed::toFloat(void) const
{
    return (float)this->fixe / (1 << this->frac);
}

int Fixed::toInt(void) const
{
    return (this->fixe >> this->frac);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fix)
{
    out << fix.toFloat();
    return out;
}

bool    Fixed::operator==(const Fixed &fix)
{
    return (this->fixe == fix.fixe);
}

bool    Fixed::operator!=(const Fixed &fix)
{
    return (this->fixe != fix.fixe);
}

bool    Fixed::operator<(const Fixed &fix) const
{
    return (this->fixe < fix.fixe);
}

bool    Fixed::operator>(const Fixed &fix) const
{
    return (this->fixe > fix.fixe);
}
bool    Fixed::operator>=(const Fixed &fix)
{
    return  (this->fixe >= fix.fixe);
}

bool    Fixed::operator<=(const Fixed &fix)
{
    return  (this->fixe <= fix.fixe);
}

Fixed   Fixed::operator-(const Fixed &fix)
{
    return Fixed(this->toFloat() - fix.toFloat());
}

Fixed   Fixed::operator+(const Fixed &fix)
{
    return Fixed(this->toFloat() + fix.toFloat());
}

Fixed   Fixed::operator/(const Fixed &fix)
{
    if (fix.fixe == 0)
    {
        std::cerr << "Devise by 0 is impossible!" << std::endl;
        return 0;
    }
    return Fixed(this->toFloat() / fix.toFloat());
}

Fixed   Fixed::operator*(const Fixed &fix)
{
    return Fixed(this->toFloat() * fix.toFloat());
}

Fixed   Fixed::operator++(int)
{
    Fixed a = *this;
    this->fixe++;
    return a; 
}

Fixed   &Fixed::operator++(void)
{
    this->fixe++;
    return *this;  
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->fixe--;
    return tmp;
}

Fixed   &Fixed::operator--(void)
{
    this->fixe--;
    return *this;
}

Fixed &Fixed::min(Fixed &a , Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed const &Fixed::min(const Fixed &a , const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a , Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

Fixed const &Fixed::max(const Fixed &a , const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}