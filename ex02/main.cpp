#include "Fixed.hpp"

int main(void)
{
	Fixed a(10.11f);
	Fixed const b(10.10f);



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
		
	return 0;
}