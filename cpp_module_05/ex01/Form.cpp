/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 08:12:01 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 22:05:39 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
// constructors
Form::Form():name("cheikh"), is_signed(false), execute_grade(10), sign_grade(5)
{
	std::cout << "Default constructor call\n";
}
Form::Form(const Form& obj):name(obj.name), execute_grade(obj.execute_grade), sign_grade(obj.sign_grade)
{
	IsInGrade();
	*this = obj;
}
Form::Form(std::string n, bool is_s, int ex_grade, int si_grade):name(n), is_signed(is_s), execute_grade(ex_grade), sign_grade(si_grade)
{
	IsInGrade();
	std::cout << "parameter constructor call\n";
}
// copy assignment operator
Form& Form::operator=(const Form& obj)
{
	is_signed = obj.is_signed;
	return (*this);
}
//  destructor
Form::~Form()
{
	std::cout << "Form destructor call\n";
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
		std::cout << " is signed";
	else
		std::cout << " is not signed";
	std::cout << ". Good to mention that it requires " << format.getSignGrade() << " grade to be signed and " << format.getExecuteGrade() << " grade to be executed\n";
	return (obj);
}
// public member functions
void Form::beSigned(Bureaucrat bureau)
{
	if (bureau.getGrade() > sign_grade)
		throw ("GRADE IS TOO LOW TO SIGN THE FORM\n");
	is_signed = true;
}
