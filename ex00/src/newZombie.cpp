/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:54 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 16:36:55 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *aNewZombie = new Zombie(name);
	aNewZombie->announce();
	return (aNewZombie);
}