/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 06:10:22 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/18 08:05:05 by akharraz         ###   ########.fr       */
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
// member public function
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	(void)executor;// Seed the random number generator with the current time
	srand(time(NULL));
	// Generate a number either 0 or 1
	int random_number = rand() % 2;
	if (random_number % 2)
		std::cout << target << " has been robotomized successfully\n";
	else
		std::cout << target << " has been not robotomized successfully\n";
}
