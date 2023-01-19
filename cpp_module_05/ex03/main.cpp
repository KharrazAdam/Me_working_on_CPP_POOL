/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:34:21 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 15:58:12 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "AForm.hpp"
# include "AForm.hpp"
# include "Intern.hpp"

int main(void)
 {
	try {
		AForm* form = NULL;
		Intern someRandomIntern;
		Bureaucrat bur(2);
		form = someRandomIntern.makeForm("ShrubberyCreationForm", "chahada");
        form->beSigned(bur);
		form->execute(bur);
	}
	catch(const char *msg){
		std::cout << msg;
	}
	return (0);
}
