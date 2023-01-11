/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:28:06 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/09 11:46:21 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int  fixed_point;
	static const int frac_bits = 8;
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed&);
	~Fixed();
    
    Fixed&	operator =(const Fixed& right_handside);

	float toFloat( void ) const;
	int     toInt( void ) const;
};

std::ostream&  operator <<(std::ostream&, const Fixed&);
#endif // FIXED_HPP