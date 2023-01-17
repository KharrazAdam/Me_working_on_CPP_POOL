/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:12:01 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 08:49:54 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
// constructors
Form::Form():name("cheikh"), is_signed(false), execute_grade(10), sign_grade(5)
{
	IsInGrade();
	std::cout << "Default constructor call\n";
}
//  destructor
Form::~Form()
{
	std::cout << "destructor call\n";
}
// bounds check
void	Form::IsInGrade(void)
{
	if (execute_grade < 1 || sign_grade < 1)
		throw ("GRADE IS TOO HIGH!\n");
	else if (execute_grade > 150 || sign_grade > 150)
		throw ("GRADE IS TOO LOW!\n");
}
// getters
std::string Form::getName(void) const
{
	return (name);
}
bool		Form::getIsSigned(void) const
{
	return (is_signed);
}
int			Form::getExecuteGrade(void) const
{
	return (execute_grade);
}
int			Form::getSignGrade(void) const
{
	return (sign_grade);
}
// overload of the insertion operator
std::ostream& operator <<(std::ostream& obj, const Form& format)
{
	std::cout << "the Form " << format.getName();
	if (format.getIsSigned() == true)
		std::cout << "is signed";
	else
		std::cout << "is not signed.";
	std::cout << " Good to mention that it requires " << format.getIsSigned() << "grade to be signed and " << format.getExecuteGrade() << " grade to be executed";
	return (obj);
}
// public member functions
void Form::beSigned(Bureaucrat bureau)
{
	if (bureau.getGrade() > sign_grade)
		throw ("GRADE IS TOO LOW TO SIGN THE FORM");
	is_signed = true;
}
