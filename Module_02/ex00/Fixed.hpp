/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:53:27 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/07 02:07:06 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int  fixed_point;
	static const int fac_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& obj);
	Fixed&	operator =(const Fixed& right_handside);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	~Fixed();
};


#endif // FIXED_HPP