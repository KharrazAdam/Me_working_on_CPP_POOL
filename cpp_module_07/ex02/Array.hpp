/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:07:49 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/23 16:33:31 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// red l oumlil derhem dial 9ehwa

# ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
private:
	T*	elem;
	unsigned int size;
public:
	// constructors
	Array(): elem(NULL), size(0)
	{
		std::cout << "default constructor call\n";
	};
	Array(unsigned int n): size(n)
	{
		std::cout << "parametral constructor call\n";
		if (!size)
			elem = NULL;
		else 
			elem = new T[size];
	};
	Array(const Array& obj):size(obj.size)
	{
		if (!size)
			elem = NULL;
		else
			elem = new T[size];
		for (size_t i = 0; i < size; i++)
			this->elem[i] = obj.elem[i];
	}
	// copy assignment operator
	Array&	operator= (const Array& obj)
	{
		this->size = obj.size;
		if (this->elem)
			delete[] this->elem;
		if (size)
			this->elem = new T[size];
		else
			this->elem = NULL;
		for (size_t i = 0; i < size; i++)
			this->elem[i] = obj.elem[i];
	}
	// overloading subscript operator
	Array& operator[] (unsigned int index)
	{
		if (index >= this->size)
			std::cout << "hello";
			// throw (std::exception);
		return (elem[index]);
	}
	// destructor
	~Array()
	{
		std::cout << "destructor call\n";
		if (elem)
			delete[] elem;
	};
};

#endif // ARRAY_H