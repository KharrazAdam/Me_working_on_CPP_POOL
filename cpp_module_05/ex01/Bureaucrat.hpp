/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:53:17 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 22:07:23 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


# include <iostream>
# include "Form.hpp"
class Form;

class Bureaucrat
{
private:
	int				    grade;
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
	int	getGrade(void)	const;
	// increment/decrement the bureaucrat grade
	void	incrementGrade(void);
	void	decrementGrade(void);
	// member function
	void    signForm(Form&);
};

// overload of the insertion operator
std::ostream& operator <<(std::ostream&, const Bureaucrat&);
#endif // BUREAUCRAT_HPP

