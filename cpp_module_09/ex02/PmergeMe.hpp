/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 03:17:42 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 09:02:38 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <unistd.h>
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
template <typename T> 
class PmergeMe
{
private:
	T con;
	T inp;
	
	bool	is_num(const char * ss)
	{
		size_t size;
	
		size = strlen(ss);
		for (size_t i = 0; i < size; i++)
			if (!isdigit(ss[i]))
				return 	false;
		return (true);
	}
	
	bool	con_fill(char **av)
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
				con.push_back(num);
			i++;
		}
		if (con.size() <= 1)
			return true;
		inp = con;
		return (true);
	}
	
	void	con_insertion(T& type)
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

	void	con_merge(T& left, T& right, T& bowl)
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
	
	void	con_mer_ins(T& cont)
	{
		size_t size = cont.size();

		if (size < 10)
			return con_insertion(cont), (void)size;
		T	left(cont.begin(), cont.begin() + (size / 2));
		T	right(cont.begin() + (size / 2), cont.end());
		con_mer_ins(left);
		con_mer_ins(right);
		con_merge(left, right, cont);
	}

public:
	~PmergeMe(){}

	bool	con_sort(char **av)
	{
		double	Time;

		if (con_fill(av) == false)
			return (false);
		clock_t	start = clock();
		con_mer_ins(con);
		clock_t	end = clock();
		Time = (end - start) * 1000.0 / CLOCKS_PER_SEC;
		con_input();
		con_output();
		std::cout << "Time to process a range of "<< con.size() << " elements with std::T& : " << Time << " ms" << std::endl;
		return (true);
	}
	
	void	con_output()
	{
		int	i = 0;
		int size = con.size();
		std::cout << "After:  ";
		while (i < size)
		{
			std::cout << con[i] << " ";
			i++;
		}
		std::cout << std::endl;
	}

	void	con_input()
	{
		int	i = 0;
		int size = inp.size();
	
		std::cout << "Before: ";
		while (i < size)
		{
			std::cout << inp[i] << " ";
			i++;
		}
		std::cout << std::endl;
	}
};

#endif