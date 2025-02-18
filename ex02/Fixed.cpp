#include "Fixed.hpp"
#include <cstring>

Fixed::Fixed()
{
	_integer = 0;
	std::cout << "-------------------Default Constructor called---------------------------" << std::endl;
}

Fixed::Fixed(const int value)
{

	std::cout << "--------------------Int constructor called--------------------------" << std::endl;

	_integer = value << _fractionalbits;

	unsigned char buffer[sizeof(_integer)];

	std::cout << "Value const int = " << value << std::endl;
	std::cout << "_fixedPoint value  int = " << _integer << std::endl;
	std::memcpy(buffer, &value, sizeof(_integer));
	std::cout << "----------------------------------------------" << std::endl;


}

Fixed::Fixed(const float value)
{
	std::cout << "--------------------Float constructor called--------------------------" << std::endl;
	std::cout << "Value  const float = " << value << std::endl;

	_integer = roundf(value * (1 << _fractionalbits));
	unsigned char buffer[sizeof(_integer)];
	std::memcpy(buffer, &_integer, sizeof(_integer));
	std::cout << "_integer's value float = " << _integer << std::endl;
	std::cout << "----------------------------------------------" << std::endl;

}

const int Fixed::_fractionalbits = 8;

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Address of variable &copy" << &copy << std::endl;
	std::cout << "Value const -<>>>>> = " << copy._integer << std::endl;
	std::cout << "_integer's value = " << _integer << std::endl;
	*this = copy;
}

Fixed  &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assigment operator called" << std::endl;
	std::cout << "_integer's value = " << _integer << std::endl;
	std::cout << " copy._integer = " << copy._integer << std::endl;

	if (this != &copy)
		_integer = copy._integer;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "-------------------Detructor called---------------------------" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "--------------------getRawBits called--------------------------" << std::endl;
	return (std::cout << "_integer's value = " << _integer << std::endl, _integer);    
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "--------------------SetRawBits called--------------------------" << std::endl;
	std::cout << "Raw value = " << _integer << std::endl;
	_integer = raw;
	std::cout << "_integer's value = " << _integer << std::endl;
}

float Fixed::toFloat(void) const
{
	std::cout << "--------------------toFloat called--------------------------" << std::endl;
	std::cout << "_integer's value = " << _integer << std::endl;
	return (static_cast<float>(_integer) / (1 << _fractionalbits));    
}

int Fixed::toInt(void) const
{
	std::cout << "--------------------to Int called--------------------------" << std::endl;
	std::cout << "_integer's value = " << _integer << std::endl;
	return (_integer >> _fractionalbits);    
}

Fixed Fixed::operator+(const Fixed &copy) const
{
	std::cout << " ----------------------------------" << std::endl;
	// std::cout << " here --> " << copy._integer << std::endl;
	// std::cout << " this->tofloat()" << this->toFloat() << std::endl;
	return Fixed(this->toFloat() + copy.toFloat());
}

Fixed Fixed::operator-(const Fixed &copy) const {
	return Fixed(this->toFloat() - copy.toFloat());
}

Fixed Fixed::operator*(const Fixed &copy) const {
	return Fixed(this->toFloat() * copy.toFloat());
}

Fixed Fixed::operator/(const Fixed &copy) const {
	if (copy._integer == 0) {
		throw std::runtime_error("Division by zero");
	}
	return Fixed(this->toFloat() / copy.toFloat());
}

bool Fixed::operator>(const Fixed &copy) const
{
	return(_integer > copy._integer);
}

bool Fixed::operator<(const Fixed &copy) const
{
	return(_integer < copy._integer);
}

bool Fixed::operator>=(const Fixed &copy) const
{
	return(_integer >= copy._integer);
}


bool Fixed::operator<=(const Fixed &copy) const
{
	return(_integer <= copy._integer);
}


bool Fixed::operator==(const Fixed &copy) const
{
	return(_integer == copy._integer);
}

bool Fixed::operator!=(const Fixed &copy) const
{
	return(_integer != copy._integer);
}


Fixed &Fixed::operator++()
{
	_integer++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp = *this; _integer++;
	return temp;
}
Fixed &Fixed::operator--()
{
	_integer--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp = *this; _integer--;
	return temp;
}

// Métodos estáticos para min y max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

std::ostream &operator << (std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
