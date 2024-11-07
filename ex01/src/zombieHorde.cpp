/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:50 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 16:36:52 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << RED << "Number of Zombies must be 1 or higher!!" << RESET << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << RED << "Allocation for horde failed!!" << RESET << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}