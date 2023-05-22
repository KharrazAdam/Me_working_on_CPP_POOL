/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 03:17:42 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 09:44:11 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <unistd.h>
#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
class PmergeMe
{
private:
	std::vector<int> vec;
	std::vector<int> inpvec;
	std::deque<int> de;
	std::deque<int> inpde;

bool	is_num(const char * ss);
// vectore
bool	vec_fill(char **av);
void	vec_insertion(std::vector<int>& type);
void	vec_merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& bowl);
void	vec_mer_ins(std::vector<int>& cont);
// deque
bool	de_fill(char **av);
void	de_insertion(std::deque<int>& type);
void	de_merge(std::deque<int>& left, std::deque<int>& right, std::deque<int>& bowl);
void	de_mer_ins(std::deque<int>& cont);
public:

PmergeMe();
~PmergeMe();
// vectore
bool	vec_sort(char **av);
void	vec_output();
void	vec_input();
// dequeu
bool	de_sort(char **av);
void	de_output();
void	de_input();
};

#endif