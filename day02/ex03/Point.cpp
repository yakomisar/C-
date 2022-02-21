#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(0), y(0)
{
	std::cout << "Дефолтный конструктор Point вызван" << std::endl;
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
	std::cout << "Конструктор Point вызван" << std::endl;
}

Point::Point(const Point &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	*this = other;
}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		std::cout << "Перегруженный оператор присваивания" << std::endl;
		(Fixed)this->x = (Fixed)other.x;
		(Fixed)this->y = (Fixed)other.y;
	}
	else
	{
		std::cout << "Самоприсваивание" << std::endl;
	}
	return (*this);
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}

Point::~Point()
{
	std::cout << "Деструктор Point вызван" << std::endl;
}

// Вычисляет положение точки D(xd,yd) относительно прямой AB
float	g(float xa, float ya, float xb, float yb, float xd, float yd) 
{
    return (xd - xa) * (yb - ya) - (yd - ya) * (xb - xa);
}

// Лежат ли точки C и D с одной стороны прямой (AB)?
bool	f(float xa, float ya, float xb, float yb, float xc, float yc, float xd, float yd) 
{
    return g(xa, ya, xb, yb, xc, yc) * g(xa, ya, xb, yb, xd, yd) >= 0;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	std::string	result;

	float	xa = a.getX().toFloat();
	float	ya = a.getY().toFloat();
	float	xb = b.getX().toFloat();
	float	yb = b.getY().toFloat();
	float	xc = c.getX().toFloat();
	float	yc = c.getY().toFloat();
	float	xd = point.getX().toFloat();
	float	yd = point.getY().toFloat();
	
	result = f(xa,ya,xb,yb,xc,yc,xd,yd) && f(xb,yb,xc,yc,xa,ya,xd,yd) && 
            f(xc,yc,xa,ya,xb,yb,xd,yd) ? "yes" : "no";
	if (result == "yes")
		return (true);
	return (false);
}