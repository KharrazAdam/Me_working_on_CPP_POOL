/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:10:43 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/22 00:13:10 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void    identify(Base* p)
{
	std::cout << "identify by pointer : ";
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void    identify(Base& r)
{
	std::cout << "identify by reference : ";
	try{
		A& a = dynamic_cast<A&>(r);
		(void)a;
		return std::cout << "A\n", (void)1;
	}
	catch (...)
	{
		;
	}
	try{
		B& a = dynamic_cast<B&>(r);
		(void)a;
		return std::cout << "B\n", (void)1;
	}
	catch (...)
	{
		;
	}
	try
	{
		C& c = dynamic_cast<C&>(r);
		(void)c;
		return std::cout << "C\n", (void)1;	
	}
	catch(...)
	{
		;
	}
}