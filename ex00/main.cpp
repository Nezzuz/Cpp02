#include "Fixed.hpp"

int main(void)
{
	Fixed a; //Setter
	a.setRawBits(8);
	Fixed b(a); //Copy Constructor. This one implies a deep copy with an overload operator within
	Fixed c; //Deep copy with = operator overloaded

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
