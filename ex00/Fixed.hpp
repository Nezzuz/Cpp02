#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		/* Fixed(integer); */
		Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		~Fixed();
		int			getRawBits(void) const;
		void			setRawBits(int const raw);

	private:
		int			_integer;
		static const int	_fractionalbits;

};

#endif
