/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:07:22 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/08 04:38:48 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";	
}

Fixed&  Fixed::operator =(const Fixed& right_handside)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_point = right_handside.getRawBits();
	return *this;
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
