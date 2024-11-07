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

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << BLUE << "Zomibe \"" << _name << "\" has been created!" << RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << RED << "Zomibe \"" << _name << "\" has been destroyed!" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}