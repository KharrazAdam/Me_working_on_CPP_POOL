/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:32:47 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/11 00:53:36 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set()
{
	std::cout << "your first name : ";
	getline(std::cin, this->first_name);
	std::cout << "your last_name : ";
	getline(std::cin, this->last_name);
	std::cout << "your nickname : ";
	getline(std::cin, this->nickname);
	std::cout << "your phone number : ";
	getline(std::cin, this->phone_number);
	std::cout << "your darkest secret : ";
	getline(std::cin, this->darkest_secret);
}

void	Contact::get()
{
	    std::cout << first_name << " " << last_name << ' ' << nickname << ' ' << phone_number << ' ' << darkest_secret << '\n';
}