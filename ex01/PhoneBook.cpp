/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:49:04 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/12 06:58:57 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::set(int i)
{
	contact[i].set(i);
}

void	PhoneBook::ask_contact_id(int i)
{
	std::string idx;

	if (i == -1)
	{
		std::cerr << "PhoneBook is empty !\n";
		return ;
	}
	std::cout << "insert the index of a contact : ";
	getline(std::cin, idx);
	for (size_t x = 0; x < idx.length(); x++)
	{
		if (!isdigit(idx[x]))
		{
			std::cout << idx << " is not a valide argument please ";
			ask_contact_id(i);
			return ;
		}
	}
	else if (stoi(idx) < 0 || stoi(idx) > i)
	{
		std::cerr << idx << " is not a valid id !\n";
		ask_contact_id(i);
		return ;
	}
	else
		contact[stoi(idx)].display();
}

void    PhoneBook::get(int i)
{
	std::cout << std::string(45, '-' ) << '\n';
	std::cout << "|     index|first_name| last_name|  nickname|\n";
	std::cout << std::string(45, '-' ) << '\n';
	for (int index = 0; index <= i; index++)   
		contact[index].get();
	ask_contact_id(i);
	return ;
}
