/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 21:58:48 by akharraz          #+#    #+#             */
/*   Updated: 2022/12/31 23:37:02 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string	name;
public:
    HumanB(std::string);
    ~HumanB();
    void	attack(void);
    void	setWeapon(Weapon&);
};
