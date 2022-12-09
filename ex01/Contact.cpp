/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:32:47 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/09 10:32:15 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set(void)
{	
	std::cout << "insert your first name :";
	std::cin >> first_name;
	std::cout << "insert your last name :";
	std::cin >> last_name;
	std::cout << "insert your nick name :";
	std::cin >> nick_name;
	return ;
}

void	Contact::get()
{
	std::cout << "the first name is : " << first_name << std::endl;
	std::cout << "the last name is : " << last_name << std::endl;
	std::cout << "the nick name is : " << nick_name << std::endl;
}
