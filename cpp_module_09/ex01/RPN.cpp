/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:05:57 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/21 13:55:22 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN()
{
	// std::cout << "Default constructor's call" << std::endl;
}

RPN::RPN(RPN& obj)
{
	// std::cout << "Copy constructor's call" << std::endl;
	(*this) = obj;
}

RPN& RPN::operator=(const RPN& obj)
{
	this->stack = obj.stack;
	return (*this);	
}

RPN::~RPN()
{
	// std::cout << "Destructor's call" << std::endl;
}

void	RPN::clear_stack(void)
{
	while (!stack.empty())
		stack.pop();
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
	int	left;
	int	right;

	if (ss.size() > 1 || stack.size() < 2)
		return (false);
	right = stack.top();
	stack.pop();
	left = stack.top();
	stack.pop();
	if (ss.front() == '+')
		stack.push(left + right);
	if (ss.front() == '-')
		stack.push(left - right);
	if (ss.front() == '*')
		stack.push(left * right);
	if (ss.front() == '/')
	{
		if (!right)
			return (false);
		stack.push(left / right);
	}
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
	return (stack.size() == 1);
}

bool	RPN::RPN_start(const char *av)
{
	if (parse(av) == false)
		return (std::cerr << "Error" << std::endl, false);
	std::cout << stack.top() << std::endl;
	return (true);
}
