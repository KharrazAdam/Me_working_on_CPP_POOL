/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:17:47 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/03 20:18:59 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "constructor called\n";
}

Harl::~Harl()
{
	std::cout << "destructor called\n";
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << '\n';
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << '\n';
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << '\n';
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';   
}

void Harl::complain(std::string s)
{
	int index = ((s == "DEBUG") * 1 + (s == "INFO") * 2 + (s == "WARNING") * 3 + (s == "ERROR") * 2 ) - 1;
    
	if (index == -1)
		return ;
	void (Harl::*pointer_name[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	(this->*pointer_name[index])();
    debug();
}
