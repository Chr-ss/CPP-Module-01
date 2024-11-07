/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:37:06 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 16:37:08 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cout << BLUE << "Usage: ./harlFilter <log level: DEBUG, INFO, WARNING, ERROR>" << RESET << std::endl;
		return (EXIT_FAILURE);
	}
	Harl newHarl;
	newHarl.complain(argv[1]);
	return (EXIT_SUCCESS);
}
