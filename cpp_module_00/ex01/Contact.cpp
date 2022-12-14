/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:32:47 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/12 16:55:08 by akharraz         ###   ########.fr       */
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
    if (std::cin.eof() == true)
    {
        std::cin.clear();
        clearerr(stdin);
    }
	getline(std::cin, data);
	if (data.empty() == true || std::cin.eof() == true)
	{
        if (std::cin.eof())
            std::cout << '\n';
		std::cout << "please insert your " << str <<  ": \n";
		fill_form(data, str, n);
		return ;
	}
	if (n == PHONE_NUMBER)
	{
		for (size_t idx = 0; idx < data.length(); idx++)
		{
			if (!isdigit(data[idx]))
			{
				std::cout << "please insert a number: \n";
				fill_form(data, str, n);
				return ;
			}
		}
	}
}

void	Contact::set(int id)
{
	this->id = id;
	std::cout << "your first name: \n";
	fill_form(first_name, "first name", STRING);
	std::cout << "your last name: \n";
	fill_form(last_name, "last name", STRING);
	std::cout << "your nickname: \n";
	fill_form(nickname, "nickname", STRING);
	std::cout << "your phone number: \n";
	fill_form(phone_number, "phone number", PHONE_NUMBER);
	std::cout << "your darkest secret: \n";
	fill_form(darkest_secret, "darkest secret", STRING);
}

void	Contact::display()
{
	std::cout << "the contact's first name is : " << first_name << '\n';
	std::cout << "the contact's last name is : " << last_name << '\n';
	std::cout << "the contact's nickname is : " << nickname << '\n';
	std::cout << "the contact's phone number is : " << phone_number << '\n';
	std::cout << "the contact's darkest secret is : " << darkest_secret << '\n';
}

void	Contact::get()
{   
	creat_table();
}
