/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:03:58 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/21 11:05:06 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

# include <iostream>
# include <stack>
#include <sstream>
class RPN
{
private:
	std::stack<int> stack;
	bool	parse(const char *);
	bool	is_num(std::string& ss);
	bool	is_token(std::string& ss);
public:
	RPN();
	RPN(RPN& obj);
	RPN& operator=(const RPN& obj);
	~RPN();
	
	bool	RPN_start(const char *);	
};

#endif