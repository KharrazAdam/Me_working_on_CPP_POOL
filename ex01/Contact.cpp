/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:32:47 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/11 05:50:17 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 * @brief 
 * 
 * @param data 
 * @param str 
 * @param n
 * @return void
 */
void    fill_form(std::string& data, const char *str, int n)
{
	getline(std::cin, data);
	if (data.empty() == true)
	{
		std::cout << "please insert your " << str <<  ": ";
		fill_form(data, str, n);
		return ;
	}
	if (n == PHONE_NUMBER)
	{
		for (size_t idx = 0; idx < data.length(); idx++)
		{
			if (!isdigit(data[idx]))
			{
				std::cout << "please insert a number: ";
				fill_form(data, str, n);
				return ;				
			}
		}
	}
}

void	Contact::set(int id)
{
	this->id = id;
	std::cout << "your first name: ";
	fill_form(first_name, "first name", STRING);
	std::cout << "your last name: ";
	fill_form(last_name, "last name", STRING);
	std::cout << "your nickname: ";
	fill_form(nickname, "nickname", STRING);
	std::cout << "your phone number: ";
	fill_form(phone_number, "phone number", PHONE_NUMBER);
	std::cout << "your darkest secret: ";
	fill_form(darkest_secret, "darkest secret", STRING);
}

void	Contact::get()
{   
		std::cout << id << " " << first_name << " " << last_name << ' ' << nickname << ' ' << phone_number << ' ' << darkest_secret << '\n';
}