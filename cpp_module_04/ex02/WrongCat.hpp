/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:32:15 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:32:57 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
	// empty field;
public:
	// constructors
	WrongCat(/* args */);
	WrongCat(const WrongCat&);
	// copy assignment opearator
	WrongCat& operator=(const WrongCat&);
	// destructor
	~WrongCat();
	void	makeSound(void) const;
};

#endif