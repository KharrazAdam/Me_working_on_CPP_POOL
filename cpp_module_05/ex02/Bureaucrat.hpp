/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:53:17 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 04:37:06 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


# include <iostream>
# include "AForm.hpp"
class AForm;

class Bureaucrat
{
private:
	int					grade;
	const std::string	name;
	// private function
	void	IsInGrade(void);
public:
	// constructors
	Bureaucrat();
	Bureaucrat(int);
	Bureaucrat(const Bureaucrat&);
	// copy assignment operator
	Bureaucrat& operator =(const Bureaucrat&);
	// destructor
	~Bureaucrat();
	// Name getter and Grade getter
	const	std::string& getName(void) const;
	unsigned int	getGrade(void)	const;
	// increment/decrement the bureaucrat grade
	void	incrementGrade(void);
	void	decrementGrade(void);
	// member function
	void	signForm(AForm&);
	void	executeForm(AForm const & form) const;
};

// overload of the insertion operator
std::ostream& operator <<(std::ostream&, const Bureaucrat&);
#endif // BUREAUCRAT_HPP
