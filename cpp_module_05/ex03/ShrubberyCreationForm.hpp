/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:00:37 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/18 06:05:55 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <ostream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
public:
	// constructors
	ShrubberyCreationForm(/* args */);
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	// copy assignment operator
	ShrubberyCreationForm& operator =(const ShrubberyCreationForm&);
	// destructor
	~ShrubberyCreationForm();
	// member public function
	void execute(Bureaucrat const & executor) const;
};

#endif // SHRUBBERYCREATIONFORM_HPP