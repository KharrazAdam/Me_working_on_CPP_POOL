/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:07:44 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/11 05:52:58 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int         fixed_point;
	static const int frac_bits = 8;
public:
	//	constructors
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed&);
	//	destructors
	~Fixed();
	//	copy assignement operator
	Fixed&  operator =(const Fixed& right_handside);
	//	getters
	float	toFloat( void ) const;
	int		toInt( void ) const;
	// comparison operators:
	bool	operator >(const Fixed& right_handside);
	bool	operator >=(const Fixed& right_handside);
	bool	operator <(const Fixed& right_handside);
	bool	operator <=(const Fixed& right_handside);
	bool	operator ==(const Fixed& right_handside);
	bool	operator !=(const Fixed& right_handside);
	//arithmetic operators
	Fixed&  operator +(const Fixed& right_handside);
	Fixed&	operator -(const Fixed& right_handside);
	Fixed&	operator *(const Fixed& right_handside);
	Fixed&	operator /(const Fixed& right_handside);
	// increment/decrement operators:
	Fixed&	operator++(void);
    Fixed	operator++(int);
	Fixed&	operator--(void);
    Fixed	operator--(int);
	//	min max member_functions
	Fixed&	max(Fixed&, Fixed&);
	Fixed&	max(const Fixed&, const Fixed&);
	Fixed&	min(Fixed&, Fixed&);
	Fixed&	min(const Fixed&, const Fixed&);
    //
    int		getRawBits( void ) const;
	void	setRawBits( int const raw );

};


std::ostream&  operator <<(std::ostream&, const Fixed&);
#endif // FIXED_HPP
