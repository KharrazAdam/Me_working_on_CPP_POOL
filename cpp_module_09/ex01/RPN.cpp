/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:05:57 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/21 11:11:36 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Default constructor's call" << std::endl;
}

RPN::RPN(RPN& obj)
{
	std::cout << "Copy constructor's call" << std::endl;
	(*this) = obj;
}

RPN& RPN::operator=(const RPN& obj)
{
	this->stack = obj.stack;
	return (*this);	
}

RPN::~RPN()
{
	std::cout << "Default destructor's call" << std::endl;
}

bool	RPN::is_num(std::string &ss)
{
	for (size_t i = 0; i < ss.size(); i++)
		if (!isdigit(ss[i]))
			return false;
	return (true);
}

bool	RPN::is_token(std::string &ss)
{
	if (ss.size() > 1)
		return (false);
	if (ss.front() == '+')
		;
	if (ss.front() == '-')
		;
	if (ss.front() == '*')
		;
	if (ss.front() == '/')
		;
	return (true);
}

bool	RPN::parse(const char *av)
{
	std::string str(av);
	std::string splited;
	std::stringstream ss(str);

	while (ss >> splited)
	{
		if (is_num(splited) == true)
			stack.push(atoi(splited.c_str()));
		else if (is_token(splited) == true)
			;
		else
			return (false);
		splited.clear();
	}
	while (!stack.empty())
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	return (true);
}

bool	RPN::RPN_start(const char *av)
{
	if (parse(av) == false)
		return (std::cerr << "Error" << std::endl, false);
	return (true);
}
