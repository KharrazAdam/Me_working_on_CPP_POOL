/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 06:10:39 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/18 06:12:00 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string target;
public:
	// constructors
	RobotomyRequestForm(/* args */);
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm&);
	// copy assignment operator
	RobotomyRequestForm& operator =(const RobotomyRequestForm&);
	// destructor
	~RobotomyRequestForm();
	// member public function
	void execute(Bureaucrat const & executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP