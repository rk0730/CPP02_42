#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed d1 = (p.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (p.getY() - b.getY());
	Fixed d2 = (p.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (p.getY() - c.getY());
	Fixed d3 = (p.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (p.getY() - a.getY());

	return (d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0);
}
