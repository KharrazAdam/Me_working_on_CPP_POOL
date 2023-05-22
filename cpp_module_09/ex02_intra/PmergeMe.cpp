/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 03:12:39 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 09:47:11 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	;
}

PmergeMe::~PmergeMe()
{
	;
}

// vector methodes


bool	PmergeMe::is_num(const char * ss)
{
	size_t size;

	size = strlen(ss);
	for (size_t i = 0; i < size; i++)
		if (!isdigit(ss[i]))
			return 	false;
	return (true);
}

bool	PmergeMe::vec_fill(char **av)
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
	inpvec = vec;
	return (true);
}

void	PmergeMe::vec_insertion(std::vector<int>& type)
{
	int	tmp, place;

	for (size_t i = 1; i < type.size(); i++)
	{
		tmp = type[i];
		place = i;
		while (place > 0 && type[place - 1] > tmp)
		{
			type[place] = type[place - 1];
			place--;
		}
		type[place] = tmp;
	}
}

void	PmergeMe::vec_merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& bowl)
{
	size_t i = 0, j = 0, k = 0;
	
	while (i < left.size() && j < right.size())
	{
		if (left[i] <= right[j])
		{
			bowl[k] = left[i];
			i++; 
		}
		else
		{
			bowl[k] = right[j];
			j++; 
		}
		k++;
	}
	while (i < left.size())
	{
		bowl[k] = left[i];
		i++;
		k++;
	}
	while (j < right.size())
	{
		bowl[k] = right[j];
		j++; 
		k++; 
	}
}

void	PmergeMe::vec_mer_ins(std::vector<int>& cont)
{
	size_t size = cont.size();
	if (size < 10)
		return vec_insertion(cont), (void)size;
	std::vector<int> left(cont.begin(), cont.begin() + (size / 2));
	std::vector<int> right(cont.begin() + (size / 2), cont.end());
	vec_mer_ins(left);
	vec_mer_ins(right);
	vec_merge(left, right, cont);
}

bool	PmergeMe::vec_sort(char **av)
{
	double	Time;

	if (vec_fill(av) == false)
		return (false);
	clock_t	start = clock();
	vec_mer_ins(vec);
	clock_t	end = clock();
	Time = (end - start) * 1000.0 / CLOCKS_PER_SEC;
	vec_input();
	vec_output();
	std::cout << "Time to process a range of "<< vec.size() << " elements with std::std::vector<int> : " << Time << " ms" << std::endl;
	return (true);
}

void	PmergeMe::vec_output()
{
	int	i = 0;
	int size = vec.size();
	std::cout << "After:  ";
	while (i < size)
	{
		std::cout << vec[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

void	PmergeMe::vec_input()
{
	int	i = 0;
	int size = inpvec.size();

	std::cout << "Before: ";
	while (i < size)
	{
		std::cout << inpvec[i] << " ";
		i++;
	}
	std::cout << std::endl;
}


// deque methodes

bool	PmergeMe::de_fill(char **av)
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
			de.push_back(num);
		i++;
	}
	if (de.size() <= 1)
		return true;
	inpde = de;
	return (true);
}

void	PmergeMe::de_insertion(std::deque<int>& type)
{
	int	tmp, place;

	for (size_t i = 1; i < type.size(); i++)
	{
		tmp = type[i];
		place = i;
		while (place > 0 && type[place - 1] > tmp)
		{
			type[place] = type[place - 1];
			place--;
		}
		type[place] = tmp;
	}
}

void	PmergeMe::de_merge(std::deque<int>& left, std::deque<int>& right, std::deque<int>& bowl)
{
	size_t i = 0, j = 0, k = 0;
	
	while (i < left.size() && j < right.size())
	{
		if (left[i] <= right[j])
		{
			bowl[k] = left[i];
			i++; 
		}
		else
		{
			bowl[k] = right[j];
			j++; 
		}
		k++;
	}
	while (i < left.size())
	{
		bowl[k] = left[i];
		i++;
		k++;
	}
	while (j < right.size())
	{
		bowl[k] = right[j];
		j++; 
		k++; 
	}
}

void	PmergeMe::de_mer_ins(std::deque<int>& cont)
{
	size_t size = cont.size();
	if (size < 10)
		return de_insertion(cont), (void)size;
	std::deque<int> left(cont.begin(), cont.begin() + (size / 2));
	std::deque<int> right(cont.begin() + (size / 2), cont.end());
	de_mer_ins(left);
	de_mer_ins(right);
	de_merge(left, right, cont);
}

bool	PmergeMe::de_sort(char **av)
{
	double	Time;

	if (de_fill(av) == false)
		return (false);
	clock_t	start = clock();
	de_mer_ins(de);
	clock_t	end = clock();
	Time = (end - start) * 1000.0 / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of "<< de.size() << " elements with std::std::deque<int> : " << Time << " ms" << std::endl;
	return (true);
}

void	PmergeMe::de_output()
{
	int	i = 0;
	int size = de.size();
	std::cout << "After:  ";
	while (i < size)
	{
		std::cout << de[i] << " ";
		i++;
	}
	std::cout << std::endl;
}

void	PmergeMe::de_input()
{
	int	i = 0;
	int size = inpde.size();

	std::cout << "Before: ";
	while (i < size)
	{
		std::cout << inpde[i] << " ";
		i++;
	}
	std::cout << std::endl;
}
