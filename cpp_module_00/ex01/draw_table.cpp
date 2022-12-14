/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_table.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 06:20:49 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/12 06:21:47 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void    show_column(std::string& data)
{
	int	len;

	len = data.length();
	if (len > 10)
		std::cout << data.substr(0, 9) << '.';
	else if (len <= 10)
		std::cout << std::string(10 - len, ' ') << data;
	std::cout << '|';
	return ;
}

void	Contact::creat_table()
{
	std::cout << '|' << std::string(9, ' ') << id << '|';
	show_column(first_name);
	show_column(last_name);
	show_column(nickname);
	std::cout << '\n' << std::string(45, '-' ) << '\n';
	return ;
}