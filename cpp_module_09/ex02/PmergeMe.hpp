/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:49:35 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 01:54:15 by akharraz         ###   ########.fr       */
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
	bool	Pmerge_vector(char **);
	bool	is_num(const char *);
	void	insertion(std::vector<int>&);
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