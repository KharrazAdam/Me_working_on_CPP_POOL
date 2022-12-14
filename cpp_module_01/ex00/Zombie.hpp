/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 00:36:53 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/14 06:02:42 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ZOMBIE_HPP)
#define	ZOMBIE_HPP

// includes
# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void	announce( void );
	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );
};


#endif // ZOMBIE_HPP
