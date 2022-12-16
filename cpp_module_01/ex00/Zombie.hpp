/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:34:45 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/16 02:55:28 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ZOMBIE_HPP)
#define ZOMBIE_HPP

// includes
# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	void	announce(void);
	void	randomChump(std::string name);
    Zombie()
    {
            std::cout << "constructor called" << std::endl;   
    };
    ~Zombie()
    {
            std::cout << "destructor called " << name << std::endl;     
    };
	Zombie*	newZombie(std::string name);
    Zombie* zombieHorde( int N, std::string name );
};

# endif // ZOMBIE_HPP
