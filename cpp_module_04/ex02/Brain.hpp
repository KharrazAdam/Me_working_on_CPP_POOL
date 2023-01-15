/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 06:22:03 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 16:05:04 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    // constructor:
    Brain(/* args */);
    Brain(const Brain&);
    // copy assignment operator
    Brain& operator =(const Brain&);
    // destructors:
    ~Brain();
};


#endif