/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:08:42 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/16 02:09:59 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
private:
    Brain* brain;
public:
	// constructors
	Dog(/* args */);
	Dog(const Dog&);
	// copy assignment opearator
	Dog& operator=(const Dog&);
	// destructor
	~Dog();
	void    makeSound(void) const;
    // check for deepcopy
    // void    gettptr()
    // {
    //     std::cout << brain << '\n';
    // }
};

#endif