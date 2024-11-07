/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:37:06 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/08 00:08:09 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	int nbrZombies = 1;
	std::cout << GREEN << "\tTest1:" << RESET << std::endl;
	Zombie *horde1 = zombieHorde(nbrZombies, "Zombie_horde1");
	if (!horde1)
		return (EXIT_FAILURE);
	for (int i = 0; i < nbrZombies; i++)
		horde1[i].announce();
	delete [] horde1;

	nbrZombies = 10;
	std::cout << GREEN << "\tTest10:" << RESET << std::endl;
	Zombie *horde10 = zombieHorde(nbrZombies, "Zombie_horde10");
	if (!horde10)
		return (EXIT_FAILURE);
	for (int i = 0; i < nbrZombies; i++)
		horde10[i].announce();
	delete [] horde10;

	nbrZombies = 0;
	std::cout << GREEN << "\tTest0:" << RESET << std::endl;
	Zombie *horde0 = zombieHorde(nbrZombies, "Zombie_horde0");
	if (!horde0)
		return (EXIT_FAILURE);
	for (int i = 0; i < nbrZombies; i++)
		horde0[i].announce();
	delete [] horde0;

	return (EXIT_SUCCESS);
}
