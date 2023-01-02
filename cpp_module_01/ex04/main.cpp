/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:21:55 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/02 17:49:01 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

static int	readFile(std::string& res, const char *file)
{
	std::string str;
	std::ifstream F_myLife(file);
	
	if (F_myLife.is_open() == false)
		return (1);
	while (!F_myLife.eof())
	{
		getline(F_myLife, str);
		if (!F_myLife.eof())
			str.push_back('\n');
		res.append(str);
	}
	F_myLife.close();
	return (0);
}

static int  writeFile(std::string& res)
{
	std::ofstream outFile("out.txt");

	if (outFile.is_open() == false)
		return (1);
	outFile << res;
	outFile.close();
	return (0);
} 

static int changeRes(std::string &res, const char *src, const char *dest)
{
	std::string s1(src);
	std::string s2(dest);
	int i;

	while ((i = res.find(s1)) != std::string::npos)
	{
		res.erase(i, s1.length());
		res.insert(i, s2);
	}    
	return (0);
}

int main(int ac,char **av)
{
	std::string res;

	if (ac != 4)
		return (1);
	if (readFile(res, av[1]))
		return (1);
	if (changeRes(res, av[2], av[3]))
		return (1);
	if (writeFile(res))
		return (1);
	return (0);
}
