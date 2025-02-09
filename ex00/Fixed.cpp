#include "Fixed.hpp"

Fixed::Fixed() {_integer = 0;}

Fixed::Fixed(const Fixed& copy) {*this = copy;}

Fixed::~Fixed() {}

Fixed& Fixed::operator = (const Fixed& copy)
{
	if (this != &copy)
		this->_integer = copy._integer;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_integer);
}

void	Fixed::setRawBits(int const raw)
{
	_integer = raw;
}
