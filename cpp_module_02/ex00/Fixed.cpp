#include "Fixed.hpp"

Fixed::Fixed() : fixe(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixe = f.getRawBits();
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called"<<  std::endl;
    return this->fixe;
}

void Fixed::setRawBits(int const raw)
{
    this->fixe = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &fix) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &fix) {
    this->fixe = fix.getRawBits();
  }
  return *this;
}