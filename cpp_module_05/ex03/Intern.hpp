/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 07:33:26 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/19 12:22:21 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
public:
    // constructor
    Intern(/* args */);
    Intern(const Intern&);
    // copy assignment operator
    Intern& operator =(const Intern&);
    // destructor
    ~Intern();
    // public member function
    AForm* makeForm(std::string, std::string);
};

#endif