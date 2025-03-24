#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
}

Point &Point::operator=(const Point &other)
{
	(void)other;
	std::cout << "an assignment operator was called" << std::endl;
	return *this;
}

Point::~Point()
{
}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}
