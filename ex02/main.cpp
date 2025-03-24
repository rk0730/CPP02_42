#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
	Fixed b(3.3f);

	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	if (a <= b)
		std::cout << "a is smaller or equal to b" << std::endl;
	if (a >= b)
		std::cout << "a is greater or equal to b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	Fixed plus = a + b;
	std::cout << "a + b = " << plus << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	Fixed inc = a++;
	std::cout << "a++ = " << inc << std::endl;

	Fixed smaller = Fixed::min(a, b);
	std::cout << "Smaller: " << smaller << std::endl;
	Fixed greater = Fixed::max(a, b);
	std::cout << "Greater: " << greater << std::endl;

	Fixed const c(42);
	Fixed const d(21);
	std::cout << "Smaller: " << Fixed::min(c, d) << std::endl;
	std::cout << "Greater: " << Fixed::max(c, d) << std::endl;

	return 0;
}