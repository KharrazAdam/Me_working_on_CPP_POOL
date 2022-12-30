/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:39:43 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/30 15:17:47 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ZOMBIE_HPP)
#define ZOMBIE_HPP

//includes
# include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void    set_value(std::string);
    void    announce( void );
};
Zombie* zombieHorde( int N, std::string name );
#endif // ZOMBIE_HPP
