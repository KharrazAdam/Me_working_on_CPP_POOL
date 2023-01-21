/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:12:37 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 23:09:57 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <iostream>
# include <ctime>

class Base
{
	public:
		virtual ~Base();
};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& r);
#endif