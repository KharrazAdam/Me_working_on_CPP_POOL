/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:38:57 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/09 08:59:56 by akharraz         ###   ########.fr       */
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
	fixed_point = n * 256; // 256 is 2^8;
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
	this->fixed_point = right_handside.getRawBits();
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
	float	to;

    to = fixed_point / 256;
	return (to);
}

int Fixed::toInt( void ) const
{
    int to;
    
    to = fixed_point >> frac_bits;
    return (to);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->fixed_point = raw;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_point);
}


    // overload func
std::ostream&  operator <<(std::ostream& output, Fixed& obj)
{
    output << obj.toFloat();
    return output;
}