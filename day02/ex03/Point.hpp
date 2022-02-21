#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		~Point();
		Point(const Point &other);
		Point(const Fixed x, const Fixed y);
		Point &operator=(const Point &other);
		Fixed	getX() const;
		Fixed	getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);
bool	f(float xa, float ya, float xb, float yb, float xc, float yc, float xd, float yd);
float	g(float xa, float ya, float xb, float yb, float xd, float yd);


#endif