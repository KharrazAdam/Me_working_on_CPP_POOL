/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:49:35 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 02:15:31 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <vector>

class PmergeMe
{
private:
	std::vector<int> vec;
	// utils
	bool	is_num(const char *);
	// start operation
	bool	Pmerge_vector(char **);
	// insertion sort implementation
	void	insertion(std::vector<int>&);
	// merge two groups
	void	merge(std::vector<int>&, std::vector<int>&, std::vector<int>&);

	void	merge(std::vector<int>&);
public:
	PmergeMe(/* args */);
	PmergeMe(PmergeMe& obj);
	PmergeMe& operator=(PmergeMe& );
	~PmergeMe();
	bool	Pmerge(char **);
};

#endif