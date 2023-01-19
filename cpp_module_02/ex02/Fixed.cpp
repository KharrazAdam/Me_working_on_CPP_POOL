/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:28:42 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 00:55:36 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	// constructors :
Fixed::Fixed()
{
	fixed_point = 0;
	// std::cout << "Default constructor called " << fixed_point << "\n ";
}
Fixed::Fixed(const int n): fixed_point(n << frac_bits)
{
	// std::cout << "Int constructor called  " << fixed_point << "\n ";
	// fixed_point = n << frac_bits;
}
Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called  " << fixed_point << "\n ";
	float tmp = n * 256; // 256 is 2^8;
	fixed_point = (roundf(tmp)); 
}
Fixed::Fixed(const Fixed& a)
{
	// std::cout << "Copy constructor called " << fixed_point << "\n ";
	*this = a;
}
	// Copy assignment operator
Fixed&  Fixed::operator =(const Fixed& right_handside)
{
	// std::cout << "Copy assignment operator called\n";
	this->fixed_point = right_handside.fixed_point;
	return *this;
}
bool	Fixed::operator >(const Fixed& right_handside)
	// comparison operators:
{
	return (this->fixed_point > right_handside.fixed_point);
}
bool	Fixed::operator >=(const Fixed& right_handside)
{
	return (this->fixed_point >= right_handside.fixed_point);
}
bool	Fixed::operator <(const Fixed& right_handside)
{
	return (this->fixed_point < right_handside.fixed_point);
}
bool	Fixed::operator <=(const Fixed& right_handside)
{
	return (this->fixed_point <= right_handside.fixed_point);
}
bool	Fixed::operator ==(const Fixed& right_handside)
{
	return (this->fixed_point == right_handside.fixed_point);
}
bool	Fixed::operator !=(const Fixed& right_handside)
{
	return (this->fixed_point != right_handside.fixed_point);
}

	// arithmetic operators :
Fixed Fixed::operator +(const Fixed& right_handside)
{
    Fixed a;
    a.fixed_point = right_handside.fixed_point + fixed_point;
	return (a);
}
Fixed&	Fixed::operator -(const Fixed& right_handside)
{
	this->fixed_point -= right_handside.fixed_point;
	return (*this);
}
Fixed&	Fixed::operator *(const Fixed& right_handside)
{
	fixed_point = (((long long)fixed_point) * ((long long)right_handside.fixed_point)) >> frac_bits;
	return *this;
}
Fixed&	Fixed::operator /(const Fixed& right_handside)
{
	fixed_point = (((long long)fixed_point) << frac_bits) / (long long)right_handside.fixed_point;
	return *this;
}
	// increment/decrement operators:
Fixed&	Fixed::operator++(void)
{
	this->fixed_point++;
	return *this;
}
Fixed	Fixed::operator++(int i)
{
	(void)i;
	Fixed a = *this;
	this->fixed_point++;
	return (a);
}
Fixed&	Fixed::operator--(void)
{
	this->fixed_point--;
	return *this;
}
Fixed	Fixed::operator--(int i)
{
	(void)i;
	--(this->fixed_point);
	return *this;
}
	// the destructor :
Fixed::~Fixed()
{
	// std::cout << "Destructor called  " << fixed_point << "\n ";	
}
	// function to implement:
float Fixed::toFloat( void ) const
{
	float tmp = (float)(fixed_point) / 256;
	return (tmp);
}
int Fixed::toInt( void ) const
{
	return (fixed_point >> frac_bits);
}
	// overload function
std::ostream&  operator <<(std::ostream& output, const Fixed& obj)
{
	output << obj.toFloat();
	return output;
}

	// min max member_functions
Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	return (b);
}
Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point > b.fixed_point)
		return ((Fixed&) a);
	return ((Fixed&) b);
}
Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (Fixed(a) < Fixed(b))
		return ((Fixed&) a);
	return ((Fixed&) b);
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	return (b);
}
    //
void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called\n";
	this->fixed_point = raw;
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called\n";
	return (fixed_point);
}
