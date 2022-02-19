#include "Fixed.hpp"

Fixed::Fixed(): fix_int(0)
{
	std::cout << "Вызван конструктор" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Вызван деструктор" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Вызван конструктор для инта" << std::endl;
	this->fix_int = val * (1 << this->fract_bits);
}

Fixed::Fixed(const float val)
{
	std::cout << "Вызван конструктор для флоата" << std::endl;
	this->fix_int = roundf(val * (1 << this->fract_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)fix_int / (float)(1 << fract_bits));
}

int	Fixed::toInt(void) const
{
	return ((int)fix_int / (int)(1 << fract_bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->fix_int = other.fix_int;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		std::cout << "Перегруженный оператор присваивания" << std::endl;
		this->fix_int = other.getRawBits();
	}
	else
	{
		std::cout << "Самоприсваивание" << std::endl;
	}
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fix_int);
}

void	Fixed::setRawBits(int const raw)
{
	this->fix_int = raw;
}

bool	Fixed::operator>(const Fixed &other)
{
	return (this->fix_int > other.fix_int);
}
bool	Fixed::operator<(const Fixed &other)
{
	return (this->fix_int < other.fix_int);
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (this->fix_int >= other.fix_int);
}
		
bool	Fixed::operator<=(const Fixed &other)
{
	return (this->fix_int <= other.fix_int);
}

bool	Fixed::operator==(const Fixed &other)
{
	return (this->fix_int == other.fix_int);
}

bool	Fixed::operator!=(const Fixed &other)
{
	return (this->fix_int != other.fix_int);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	result;
	result.fix_int = this->fix_int + other.fix_int;
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	result;
	result.fix_int = this->fix_int - other.fix_int;
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	result;
	result.fix_int = this->fix_int * other.fix_int;
	result.fix_int = result.toFloat();
	return (result);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed	result;
	result.fix_int = this->fix_int / other.toFloat();
	return (result);
}

std::ostream &operator<<(std::ostream &output, Fixed const &other)
{
	output << other.toFloat();
	return (output);
}

Fixed	&Fixed::operator++()
{
	this->fix_int++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++*this;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	this->fix_int--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--*this;
	return (temp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a <= (Fixed)b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a >= (Fixed)b)
		return (a);
	else
		return (b);
}