/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:39:28 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 00:09:28 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{
private:
    // no data  this time
public:
    // constructors
    ScavTrap(/* args */);
    ScavTrap(std::string);
    ScavTrap(const ScavTrap&);
    // copy assignment operator
    ScavTrap&   operator =(const ScavTrap&);
    // destructor
    ~ScavTrap();
    // pusblic member functions
    void guardGate(void);
};

#endif // SCAVTRAP_HPP