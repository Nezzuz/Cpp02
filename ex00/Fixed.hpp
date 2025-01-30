#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed(integer);
		Fixed(const Fixed &copy);
		/* Here i'll put the assignment operator overload */
		~Fixed();
		int			getRawBits(void) const;
		void			setRawBits(int const raw);

	private:
		int			_integer;
		static const int	_fractionalbits;

};

#endif
