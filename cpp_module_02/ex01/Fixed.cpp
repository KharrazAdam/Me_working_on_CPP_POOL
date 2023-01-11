/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:38:57 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/09 12:04:51 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	// constructors :

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called \n";
	fixed_point = n << frac_bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called \n";
    float tmp = n * 256; // 256 is 2^8;
	fixed_point = (roundf(tmp)); 
}

Fixed::Fixed(const Fixed& a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

	// Copy assignment operator

Fixed&  Fixed::operator =(const Fixed& right_handside)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_point = right_handside.fixed_point;
	return *this;
}

	// the destructor :

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";	
}

	// function to implement

float Fixed::toFloat( void ) const
{
    float tmp = (float)(fixed_point) / 256;
	return (tmp);
}

int Fixed::toInt( void ) const
{
	return (fixed_point >> frac_bits);
}

	// overload func

std::ostream&  operator <<(std::ostream& output, const Fixed& obj)
{
	output << obj.toFloat();
	return output;
}
