/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:27:41 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/14 01:28:23 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap :  public ClapTrap
{
private:
    // no data  this time
public:
    // constructors
    FragTrap(/* args */);
    FragTrap(std::string);
    FragTrap(const FragTrap&);
    // copy assignment operator
    FragTrap&   operator =(const FragTrap&);
    // destructor
    ~FragTrap();
    // pusblic member functions
    void guardGate(void);
};

#endif // FRAGTRAP_HPP