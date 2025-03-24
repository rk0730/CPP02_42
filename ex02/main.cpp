#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
	Fixed const b(3.3f);



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
		
	return 0;
}