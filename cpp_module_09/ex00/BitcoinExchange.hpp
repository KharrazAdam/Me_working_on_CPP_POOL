/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:33:10 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/21 08:59:27 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H
#define BITCOINEXCHANGE_H

# include <map>
# include <iostream>
# include <fstream>
# include <time.h>
#include <sstream>

class BitcoinExchange
{
private:
	std::map<std::string, double>	dabase;
	bool	map_data(std::ifstream &file);
	bool	store_data(void);
	bool	check_header(int i, const char *head, std::ifstream &file, std::string &line);
	bool	check_date(int i, std::string &line);
	bool	check_separator(int i, int len, std::string &line, const char *sep);
	bool	is_double(std::stringstream &ss, int x);
	void	print_error(int line, const char *str);
	void	print_price(int line, std::string key, double value);
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& obj);
	~BitcoinExchange();
	BitcoinExchange& operator=(const BitcoinExchange& obj);

	bool	btc_start(const char *path);
};
#endif