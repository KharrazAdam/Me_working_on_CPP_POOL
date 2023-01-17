/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 05:49:47 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/17 18:22:49 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
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
	Form();
	Form(const Form&);
	Form(std::string n, bool is_s, int ex_grade, int si_grade);
    // copy assignment operator
    Form& operator =(const Form& obj);
	// destructor
	~Form();
	// getters
	std::string getName(void) const;
	bool		getIsSigned(void) const;
	int			getExecuteGrade(void) const;
	int			getSignGrade(void) const;
	// public member functions
	void beSigned(Bureaucrat obj);
};
	// overload of the insertion operator
	std::ostream& operator <<(std::ostream&, const Form&);

#endif