/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 03:16:26 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:17:03 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
protected:
	// empty field;
public:
	// constructors
	Cat(/* args */);
	Cat(const Cat&);
	// copy assignment opearator
	Cat& operator=(const Cat&);
	// destructor
	~Cat();
	void	makeSound(void) const;
};

#endif