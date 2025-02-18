#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <bitset>

class	Fixed
{
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		~Fixed();
		int			getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int			toInt(void) const;

	private:
		int			_integer;
		static const int	_fractionalbits;

};

std::ostream &operator << (std::ostream &out, const Fixed &value);

#endif
