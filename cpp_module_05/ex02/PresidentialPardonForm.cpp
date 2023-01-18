/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:11:03 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/18 08:33:10 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "Default constructor call\n";
}
RobotomyRequestForm::RobotomyRequestForm(std::string random):target(random)
{
	std::cout << "Parameter constructor call\n";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
	std::cout << "copy constructor call\n";
	(*this) = obj;
}
// copy assignment operator
RobotomyRequestForm& RobotomyRequestForm:: operator=(const RobotomyRequestForm& obj)
{
	(void)obj;
	target = obj.target;
	return (*this);
}
// destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "destructor call\n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
