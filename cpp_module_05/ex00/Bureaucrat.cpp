/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:53:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 08:18:10 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
// constructors
Bureaucrat::Bureaucrat():grade(1), name("Cheikh")
{
	std::cout << "Bureaucrat Default constructor call for " << name << '\n';
}
Bureaucrat::Bureaucrat(const Bureaucrat& obj):name(obj.name)
{
    (*this) = obj;
}
// copy assignment operator
Bureaucrat& Bureaucrat::operator =(const Bureaucrat& obj)
{
    grade = obj.grade;
    return (*this);
}
Bureaucrat::Bureaucrat(int a):grade(a), name("Cheikh")
{
	std::cout << "Bureaucrat type constructor call for " << name << '\n';
	IsInGrade();
}
// destructor
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor call\n";
}
// Name getter and Grade getter
const	std::string& Bureaucrat::getName(void) const
{
	return (name);
}
int	Bureaucrat::getGrade(void)	const
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
	std::cout << cheikh.getName() << ", bureaucrat grade " << cheikh.getGrade() << '\n';
	return (obj);
}
// private bool function
void	Bureaucrat::IsInGrade(void)
{
	if (grade < 1)
		throw ("GRADE IS TOO HIGH!\n");
	else if (grade > 150)
		throw ("GRADE IS TOO LOW!\n");
}
