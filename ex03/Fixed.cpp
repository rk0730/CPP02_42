#include "Fixed.hpp"

const int Fixed::fractional_bits = 8;

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int value)
{
	this->value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
	operator=(other);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		value = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return value;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat() const
{
	return (float)value / (1 << fractional_bits);
}

int Fixed::toInt() const
{
	return value >> fractional_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	(void)fixed;
	out << fixed.toFloat();
	return out;
}

bool Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return *this > other || *this == other;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return *this < other || *this == other;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return !(*this == other);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() + other.getRawBits());
	return result.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(this->getRawBits() - other.getRawBits());
	return result.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() * other.getRawBits()) >> fractional_bits);
	return result.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((this->getRawBits() << fractional_bits) / other.getRawBits());
	return result.toFloat();
}

Fixed &Fixed::operator++()
{
	value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	value++;
	return tmp;
}

Fixed &Fixed::operator--()
{
	value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	value--;
	return tmp;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return f1;
	else
		return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 < f2)
		return f1;
	else
		return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	else
		return f2;
}
