/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:34:44 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/16 19:20:41 by akharraz         ###   ########.fr       */
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
    Zombie();
    ~Zombie();
	void	announce(void);
	Zombie*	newZombie(std::string name);
	void	randomChump(std::string name);
    Zombie* zombieHorde( int N, std::string name );
};

#endif // ZOMBIE_HPP
