#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();
	Fixed getX() const;
	Fixed getY() const;
	void setX(const Fixed x);
	void setY(const Fixed y);

private:
	Fixed x;
	Fixed y;
};

#endif