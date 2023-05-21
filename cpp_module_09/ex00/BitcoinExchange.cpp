/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 01:33:48 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/20 17:12:24 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << "Default constructor's call" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "Default destructor's call" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	(*this) = obj;	
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	this->dabase = obj.dabase;
	return (*this);
}

void	BitcoinExchange::print_error(int line, const char *str)
{
	std::cerr << "Error: line " << line << ": ";
	std::cerr << str << " " << std::endl;
}

bool	BitcoinExchange::is_double(std::stringstream &ss, int x)
{
	bool	point = 0;
	int		size = ss.str().size();

	if (ss.str().empty() || !isdigit(ss.str()[0]))
			return print_error(x, "not a valid value"), false;	
	for (int i = 0; i < size; i++)
	{
		if (isdigit(ss.str()[i]))
			continue ;
		if (ss.str()[i] == '.' && !point)
			point = true;
		else
			return print_error(x, "not a valid value"), false;
	}
	return (true);
}


bool	BitcoinExchange::check_header(int i, const char *head, std::ifstream &file, std::string &line)
{
	if (std::getline(file, line))
	{
		if (line.compare(head) != 0)
			return print_error(i, "unvalid header"), false;
	}
	else
    	return std::cerr << "Error: file is empty" << std::endl, false;
	return true;
}

bool	febr_leap(tm &date)
{
	int year = 1900 + date.tm_year;
	if (date.tm_mon == 1 && date.tm_mday > 29)
		return false;
	if ((year % 4) == 0)
	{
		if ((year % 100) == 0)
		{
			if ((year % 400) == 0)
				return true;
			else if (date.tm_mday > 28)
				return false;
		}
	}		
	else if (date.tm_mon == 1 && date.tm_mday > 28)
		return false;
	return (true);
}

bool	BitcoinExchange::check_date(int i, std::string &line)
{
	struct tm	date;

	if (!(strptime(line.c_str(), "%Y-%m-%d", &date)) || !febr_leap(date))
		return print_error(i, "the valid forma is YYYY-MM-DD | Price"), false;
	return true;
}

bool	BitcoinExchange::check_separator(int i, int len, std::string &line, const char *sep)
{
	if (line.substr(10, len).compare(sep) != 0)
	{
		print_error(i, "wrong separator");
		return false;
	}
	return true;
}

bool	BitcoinExchange::store_data()
{
	std::ifstream		file("./cpp_09/data.csv");
	std::string			line;
	std::stringstream	ss;
	int					i = 1;
	double				value;

	if (file.is_open() == false)
		return std::cerr << "error: ", std::perror("./cpp_09"), false;
	if (check_header(i, "date,exchange_rate", file, line) == false)
		return (false);
	while (std::getline(file, line))
	{
		i++;
		if (!check_date(i, line))
			return std::cerr << "{in data.csv}" << std::endl, false;
		if (check_separator(i, 1, line, ",") == false)
			return std::cerr << "{in data.csv}" << std::endl, false;
		ss.str(line.substr(11).c_str());
		if (is_double(ss, i) == false)
			return std::cerr << "{in data.csv}" << std::endl, false;
		if (dabase.find(line.substr(0, 10)) != dabase.end())
			return print_error(i, "duplicated key in data.csv"), false;
		ss.clear();
		ss >> value;
		dabase[line.substr(0, 10)] = value;
	}
	return true;
}

void	BitcoinExchange::print_price(int line, std::string key, double value)
{
	std::map<std::string, double>::iterator it;
	it = (dabase.lower_bound(key));
	if (it != dabase.begin())
		it--;
	if (key.compare((*dabase.begin()).first) < 0)
		print_error(line, "no values before the date!");
	else
		std::cout << key << " => " << value << " = " << (*it).second * value << std::endl;
}

bool BitcoinExchange::map_data(std::ifstream &file)
{
	std::string			line;
	std::stringstream	ss;

	int			i = 1;
	double		value;
	if (check_header(i, "date | value", file, line) == false)
		return (false);
	if (store_data() == false)
		return (dabase.clear(), false);
	while (std::getline(file, line) && ++i)
	{
		if (!check_date(i, line))
			continue ;
		if (check_separator(i, 3, line, " | ") == false)
			continue ;
		ss.str(line.substr(13).c_str());
		if (is_double(ss, i) == false)
			continue ;
		ss.clear();
		ss >> value;
		if (value > 1000)
		{
			print_error(i, "too large a number");
			continue ;
		}
		print_price(i, line.substr(0, 10), value);
    }
	return dabase.clear(), true;
}

bool BitcoinExchange::btc_start(const char *path)
{
	std::ifstream file(path);
	
	if (file.is_open() == false)
		return std::cerr << "error: ", std::perror(path), false;
	if (this->map_data(file) == false)
		return file.close(), dabase.clear(), false;
	return true;
}
