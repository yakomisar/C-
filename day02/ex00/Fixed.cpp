#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Вызван конструктор" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Вызван деструктор" << std::endl;
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
	return *this;
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