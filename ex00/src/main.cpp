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
	std::cout << GREEN << "\tTest1:" << RESET << std::endl;
	Zombie *test1 = newZombie("alloced_mem_zomibe");
	if (!test1)
		return (EXIT_FAILURE);
	randomChump("stack_mem_zomibe");
	delete test1;

	std::cout << GREEN << "\n\tTest2:" << RESET << std::endl;
	Zombie *test2 = newZombie("other_name");
	if (!test2)
		return (EXIT_FAILURE);
	randomChump("different_name");
	delete test2;
	return (EXIT_SUCCESS);
}