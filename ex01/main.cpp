/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:05:15 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/12 06:55:53 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook   phonebook;
	std::string   command;
	int i = -1;
	while (1)
	{
        std::cout << "insert ADD or SEARCH or Exit: ";
		getline(std::cin, command);
		if (!command.compare("ADD"))
			phonebook.set(++i % MAX_CONTACTS);
		else if (!command.compare("SEARCH"))
			phonebook.get(i % MAX_CONTACTS);
		else if (!command.compare("EXIT"))
            return (0);
	}
	return (0);
}
