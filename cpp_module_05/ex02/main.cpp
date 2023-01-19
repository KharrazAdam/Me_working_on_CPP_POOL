/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:34:21 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 06:47:12 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"


int main(void)
 {
		AForm* leek = NULL;
		try{
			AForm* form = new ShrubberyCreationForm("chajarat zawia");
			leek = form;
			Bureaucrat cheikh(137);
			std::cout << "cheikh's grade: " << cheikh.getGrade() << '\n';
			std::cout << "the form's execution grade: " << form->getExecuteGrade() << '\n';
			std::cout << "sign status before besigned(): " << form->getIsSigned() << '\n';
			form->beSigned(cheikh);
			std::cout << "sign status after besigned(): " << form->getIsSigned() << '\n';
			cheikh.executeForm(*form);
			cheikh.decrementGrade();
			cheikh.executeForm(*form);
			delete (form);
		}
		catch(const char *msg){
			if (leek)
				delete (leek);
			std::cout << msg;
		}
		std::cout << "--------------------------\n";
		try {
		AForm *form = new PresidentialPardonForm("Ossama ben laden");
		leek = form;
		Bureaucrat cheikh(5);
		form->beSigned(cheikh); // to be commented
		std::cout << "cheikh's grade: " << cheikh.getGrade() << '\n';
		std::cout << "the form's execution grade: " << form->getExecuteGrade() << '\n';
		cheikh.executeForm(*form);
		Bureaucrat cheikh1(13);
		cheikh1.decrementGrade();
		cheikh1.executeForm(*form);
		delete (form);
		}
		catch (const char *msg)
		{
			if (leek)
				delete (leek);
			std::cout << msg;
		}
	std::cout<< "----------------------------\n";
	try {
		AForm *form = new RobotomyRequestForm("cyborg");
		leek = form;
		Bureaucrat cheikh(45);
		form->beSigned(cheikh);
		std::cout << "cheikh's grade: " << cheikh.getGrade() << '\n';
		std::cout << "the form's execution grade: " << form->getExecuteGrade() << '\n';
		cheikh.executeForm(*form);
		delete (leek);
	}
	catch (const char *msg)
	{
		if (leek)
			delete (leek);
		std::cout << msg;
	}
	return (0);
}
