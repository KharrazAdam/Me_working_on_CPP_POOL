/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:07:49 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/23 17:17:15 by akharraz         ###   ########.fr       */
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
	unsigned int a_size;
public:
	// constructors
	Array(): elem(NULL), a_size(0)
	{
		std::cout << "default constructor call\n";
	};
	Array(unsigned int n): a_size(n)
	{
		std::cout << "parametral constructor call\n";
		if (!a_size)
			elem = NULL;
		else 
			elem = new T[a_size];
	};
	Array(const Array& obj):a_size(obj.a_size)
	{
		if (!a_size)
			elem = NULL;
		else
			elem = new T[a_size];
		for (size_t i = 0; i < a_size; i++)
			this->elem[i] = obj.elem[i];
	}
	// copy assignment operator
	Array&	operator= (const Array& obj)
	{
		this->a_size = obj.a_size;
		if (this->elem)
			delete[] this->elem;
		if (a_size)
			this->elem = new T[a_size];
		else
			this->elem = NULL;
		for (size_t i = 0; i < a_size; i++)
			this->elem[i] = obj.elem[i];
	}
	// overloading subscript operator
	Array& operator[] (unsigned int index)
	{
		if (index >= this->a_size)
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
	void size(void)
	{
		return a_size;
	}
};

#endif // ARRAY_H