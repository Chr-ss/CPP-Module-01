/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:50 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/08 12:11:02 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void)
{
	std::cout << RED << "HumanA \"" << _name << "\" faded away!" << RESET << std::endl;
}

void HumanA::setWeapon(const Weapon &weapon)
{
	_weapon = weapon;
}

void HumanA::attack(void) const
{
	std::cout << BLUE << _name << " attacks with their " << _weapon.getType() << RESET << std::endl;
}