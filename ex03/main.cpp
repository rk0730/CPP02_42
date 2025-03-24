#include "Point.hpp"

bool is_point_in_triangle(const Point p, const Point a, const Point b, const Point c);

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(10), Fixed(0));
	Point c(Fixed(0), Fixed(10));

	Point p(Fixed(15), Fixed(15));

	if (is_point_in_triangle(a, b, c, p))
		std::cout << "Point p is inside the triangle" << std::endl;
	else
		std::cout << "Point p is outside the triangle" << std::endl;

	return 0;
}
