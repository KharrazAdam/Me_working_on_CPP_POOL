/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 07:41:33 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 17:11:58 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// constructor
Intern::Intern()
{
	std::cout << "Default constructor call\n";
}
Intern::Intern(const Intern& obj)
{
	*this = obj;
}
Intern& Intern::operator =(const Intern& obj)
{
	(void)obj;
	return (*this);   
}
// Destructor
Intern::~Intern()
{
	std::cout << "Destructor call\n";
}
// public member function
AForm* Intern::makeForm(std::string name, std::string form)
{
	AForm*	ptr[3] = {new ShrubberyCreationForm(form), new RobotomyRequestForm(form), new PresidentialPardonForm(form)};
	
	int	index = ((name == "ShrubberyCreationForm") * 1 + (name == "RobotomyRequestForm") * 2 + (name == "PresidentialPardonForm") * 3) - 1;
	for (size_t i = 0; i < 3; i++)
	{
		if (i != index)
			delete ptr[index];
	}
	
	return (ptr[index]);
}
