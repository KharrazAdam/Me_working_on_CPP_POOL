/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:51:25 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 09:55:55 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

# include <iostream>
# include <cstdlib>

// function that returns us a number significan the type of the number (i.e, int or float or double or char)
int	get_type(const std::string& str);
// this function calls the print_cast in switch case form
int	print_cast(const char* str, const int type);
// functions where we cast and print output
void	charToTypes(const char*);
void	intToTypes(const char*);
void	floatToTypes(const char*);
void	doubleToTypes(const char*);

#endif // CAST
