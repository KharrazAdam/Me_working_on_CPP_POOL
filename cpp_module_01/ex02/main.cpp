/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 21:20:37 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/04 01:00:00 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
	std::string adam("HI THIS IS BRAIN");
	std::string*	stringPTR = &adam;
	std::string&	stringREF = adam;

	std::cout << "The memory address of the adam variable : " << &adam << '\n';
	std::cout << "The memory address held by stringPTR    : " << stringPTR << '\n';
	std::cout << "The memory address held by stringREF    : " << &stringREF << '\n';

    std::cout << "The value of the string adam is         : " << adam << '\n';
    std::cout << "The value pointed to by stringPTR       : " << *stringPTR << '\n';
    std::cout << "The value pointed to by stringREF       : " << stringREF << '\n';
	return (0);
}