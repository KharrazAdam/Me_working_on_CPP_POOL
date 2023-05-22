/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 03:18:07 by akharraz          #+#    #+#             */
/*   Updated: 2023/05/22 08:53:23 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <iostream>
#include <termios.h>
#include <unistd.h>

// int main2() {
//     // Open the terminal
//     int fd = STDIN_FILENO; // Assuming you want to modify the settings of standard input
//     struct termios term;

//     // Get the current terminal settings
//     if (tcgetattr(fd, &term) != 0) {
//         std::cerr << "Failed to get terminal attributes." << std::endl;
//         return 1;
//     }

//     // Modify the terminal settings (change the display speed)
//     cfsetispeed(&term, 9600); // Set the input baud rate to 9600
//     cfsetospeed(&term, 9600); // Set the output baud rate to 9600

//     // Apply the modified terminal settings
//     if (tcsetattr(fd, TCSANOW, &term) != 0) {
//         std::cerr << "Failed to set terminal attributes." << std::endl;
//         return 1;
//     }

//     // std::cout << "Display speed changed successfully." << std::endl;

//     return 0;
// }

int main(int ac, char **av)
{
	(void)ac;
	// main2();
    PmergeMe<std::vector<int> > i;
	if (i.con_sort(av) == false)
		return (std::cerr << "Error" << std::endl, 1);
	return (0);
}
