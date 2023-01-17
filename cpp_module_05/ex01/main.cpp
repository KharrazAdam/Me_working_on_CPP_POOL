/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:40:47 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 22:04:48 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
	Form form("moqadem", false, 500, 9);
	}
	catch(const char *msg){
		std::cout << msg;
	}
	std::cout << "-----------\n";
	try{
	Form form("moqadem", false, -500, 9);
	}
	catch(const char *msg){
		std::cout << msg;
	}
	std::cout << "-----------\n";    
	try{
	Form form("moqadem", false, 150, 99);
	std::cout << form;
	}
	catch(const char *msg){
		std::cout << msg;
	}
	std::cout << "-----------\n";    
	try{
	Form form("chahada", false, 30, 12);
	Bureaucrat cheikh(2);
	std::cout << form;
	cheikh.signForm(form);
	}
	catch(const char *msg){
		std::cout << msg;
	}
	std::cout << "-----------\n";
	try{
	Form form("chahada", false, 30, 12);
	Bureaucrat cheikh(41);
	// form.beSigned(cheikh);
	std::cout << form;
	cheikh.signForm(form);
	}
	catch(const char *msg){
		std::cout << msg;
	}
	std::cout << "-----------\n";
	try{
	Form form("chahada", false, 30, 12);
	Bureaucrat cheikh(11);
	// form.beSigned(cheikh);
	std::cout << form;
	cheikh.signForm(form);
	std::cout << form;
	}
	catch(const char *msg){
		std::cout << msg;
	}
}
