/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 05:49:47 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 08:45:07 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
   const std::string	name;
   bool					is_signed;
   const int			execute_grade;
   const int			sign_grade;
   //private member function;
   void	IsInGrade(void);
public:
	// constructor
	Form(/* args */);
	// destructor
	~Form();
	// getters
	std::string getName(void) const;
	bool		getIsSigned(void) const;
	int			getExecuteGrade(void) const;
	int			getSignGrade(void) const;
	// public member functions
	void beSigned(Bureaucrat);
};
	// overload of the insertion operator
	std::ostream& operator <<(std::ostream&, const Form&);

#endif