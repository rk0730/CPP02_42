#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p);

int main(void)
{
	Point a(0,0);
	Point b(10,0);
	Point c(0,10);

	Point p(15,15);
	if (bsp(a, b, c, p))
		std::cout << "Point p is inside the triangle" << std::endl;
	else
		std::cout << "Point p is outside the triangle" << std::endl;

	Point p2 = p;
	std::cout << "p2.x = " << p2.getX() << std::endl;
	std::cout << "p2.y = " << p2.getY() << std::endl;
	Point p3;
	p3 = p;
	std::cout << "p3.x = " << p3.getX() << std::endl;
	std::cout << "p3.y = " << p3.getY() << std::endl;
	return 0;
}
