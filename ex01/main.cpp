/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:05:15 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/12 16:51:18 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "PhoneBook.hpp"
# include <unistd.h>

int main(void)
{
	PhoneBook   phonebook;
	std::string   command;
	int i = -1;
	
	while (1)
	{
		if (std::cin.eof() == 1)
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			continue;
		}
		std::cout << "insert ADD or SEARCH or Exit: \n";
		std::getline(std::cin, command);
		if (!command.compare("ADD"))
			phonebook.set(++i % MAX_CONTACTS);
		else if (!command.compare("SEARCH"))
			phonebook.get(i);
		else if (!command.compare("EXIT"))
			return (0);
	}
	return (0);
}
