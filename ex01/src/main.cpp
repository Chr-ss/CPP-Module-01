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

#include "../inc/Zombie.hpp"

int main(void)
{
	int nbrZombies = 10;
	std::cout << GREEN << "\tTest1:" << RESET << std::endl;
	Zombie *horde1 = zombieHorde(nbrZombies, "Zombie_horde1");
	if (!horde1)
		return (EXIT_FAILURE);
	for (int i = 0; i < nbrZombies; i++)
		horde1[i].announce();
	delete horde1;
	return (EXIT_SUCCESS);
}