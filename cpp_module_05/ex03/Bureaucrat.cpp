/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:53:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 07:12:11 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// constructors
Bureaucrat::Bureaucrat():grade(150), name("hamdan al cheikh II")
{
	// std::cout << "Bureaucrat Default constructor call for " << name << '\n';
}
Bureaucrat::Bureaucrat(const Bureaucrat& obj):name(obj.name)
{
	(*this) = obj;
}
Bureaucrat::Bureaucrat(int a):grade(a), name("hamdan al cheikh II")
{
	// std::cout << "Bureaucrat type constructor call for " << name << '\n';
	IsInGrade();
}
// copy assignment operator
Bureaucrat& Bureaucrat::operator =(const Bureaucrat& obj)
{
	grade = obj.grade;
	return (*this);
}
// destructor
Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat Destructor call\n";
}
// Name getter and Grade getter
const	std::string& Bureaucrat::getName(void) const
{
	return (name);
}
unsigned int	Bureaucrat::getGrade(void)	const
{
	return (grade);
}
// increment/decrement the bureaucrat grade
void	Bureaucrat::incrementGrade(void)
{
	grade--;
	IsInGrade();
}
void	Bureaucrat::decrementGrade(void)
{
	grade++;
	IsInGrade();
}
// overload of the insertion operator
std::ostream& operator <<(std::ostream& obj, const Bureaucrat& cheikh)
{
	std::cout << cheikh.getName() << ", bureaucrat grade " << cheikh.getGrade() << std::endl;
	return (obj);
}
// private function
void	Bureaucrat::IsInGrade(void)
{
	if (grade < 1)
		throw ("GRADE IS TOO HIGH!\n");
	else if (grade > 150)
		throw ("GRADE IS TOO LOW!\n");
}
// member function
void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (const char *msg)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << msg;
        return ;
	}
	std::cout << name << " signed " << form.getName() << " \n";
}
void	Bureaucrat::executeForm(AForm const & form) const
{
    form.execute(*this);
	std::cout << name << " executed " << form.getName() << '\n';
}