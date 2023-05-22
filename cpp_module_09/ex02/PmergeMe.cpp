/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:53:49 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 01:56:54 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	// std::cout << "Default constructor's call" << std::endl;
}

PmergeMe::~PmergeMe()
{
	// std::cout << "Destructor's call" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe& obj)
{
	(*this) = obj;
	// std::cout << "Default constructor's call" << std::endl;
}

PmergeMe& PmergeMe::operator=(PmergeMe& obj)
{
	this->vec = obj.vec;
	return (*this);	
}

bool	PmergeMe::is_num(const char * ss)
{
	size_t size;

	size = strlen(ss);
	for (size_t i = 0; i < size; i++)
		if (!isdigit(ss[i]))
			return 	false;
	return (true);
}

void	PmergeMe::insertion(std::vector<int>& vect)
{
	int	tmp, place;

	for (size_t i = 1; i < vect.size(); i++)
	{
		tmp = vect[i];
		place = i;
		while (place > 0 && vect[place - 1] > tmp)
		{
			vect[place] = vect[place - 1];
			place--;
		}
		vect[place] = tmp;
	}
}

void	PmergeMe::merge(std::vector<int>& veci, std::vector<int>& vecj, std::vector<int>& veck)
{
	size_t i = 0, j = 0, k = 0;

	while (i < veci.size() && j < vecj.size())
	{
		if (veci[i] <= vecj[j])
		{
			veck[k] = veci[i];
			i++; 
		}
		else
		{
			veck[k] = vecj[j];
			i++; 
		}
		k++;
	}
	while (i < veci.size())
	{
		veck[k] = veci[i];
		i++;
		k++;
	}
	while (j < vecj.size())
	{
		veck[k] = vecj[j];
		i++; 
		k++; 
	}
}

void	print_before(char **av)
{
	int i = 0;
	std::cout << "Before: ";
	while (av[++i])
		std::cout << av[i] << " ";
	std::cout << std::endl;
}



bool PmergeMe::Pmerge_vector(char **av)
{
	int	i;
	int	num;

	i = 1;
	if (!av || !av[i])
		return (true);
	while (av[i])
	{
		if (is_num(av[i]) == false)
			return (false);
		if ((num = atoi(av[i])) < 0)
			return false;
		else
			vec.push_back(num);
		i++;
	}
	if (vec.size() <= 1)
		return true;
	print_before(av);
	insertion(vec);
	return (true);
}

bool PmergeMe::Pmerge(char **av)
{
	if (Pmerge_vector(av) == false)
		return (false);
	return (true);
}