/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:34:21 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/18 08:03:51 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	{
		ShrubberyCreationForm scf("tree");
		Bureaucrat cheikh;

		scf.execute(cheikh);
	}

	{
		RobotomyRequestForm rrf("target");
		Bureaucrat cheikh;
        rrf.execute(cheikh);
	}

}
