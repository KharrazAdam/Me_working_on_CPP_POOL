/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:11:03 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 06:48:28 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("the Presidential Pardon Form", false, 5, 25), target("target")
{
	// std::cout << "Default constructor call\n";
}
PresidentialPardonForm::PresidentialPardonForm(std::string random):AForm("the Presidential Pardon Form", false, 5, 25), target(random)
{
	// std::cout << "Parameter constructor call\n";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj): AForm("the Presidential Pardon Form", false, 5, 25)
{
	// std::cout << "copy constructor call\n";
	(*this) = obj;
}
// copy assignment operator
PresidentialPardonForm& PresidentialPardonForm:: operator=(const PresidentialPardonForm& obj)
{
	(void)obj;
	target = obj.target;
	return (*this);
}
// destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "destructor call\n";
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getIsSigned() == false)
		throw ("the form is not signed\n");
	if (executor.getGrade() > getExecuteGrade())
		throw ("the bureaucrate's grade isn't enough to execute the form\n");
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
