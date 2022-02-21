#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fix_int;
		static const int	fract_bits = 8;
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		bool	operator>(const Fixed &other);
		bool	operator<(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator==(const Fixed &other);
		bool	operator!=(const Fixed &other);
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		Fixed	&operator++();
		Fixed	operator++(int d);
		Fixed	&operator--();
		Fixed	operator--(int d);
		static	Fixed &min(Fixed &a, Fixed &b);
		static	Fixed const &min(const Fixed &a, const Fixed &b);
		static	Fixed &max(Fixed &a, Fixed &b);
		static	Fixed const &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &output, Fixed const &other);

#endif