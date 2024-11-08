/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:50 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/08 12:06:19 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(void)
{
	std::cout << RED << "HumanB \"" << _name << "\" faded away!" << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (_weapon == NULL)
		std::cout << BLUE << _name << " attacks with their.. Oh god, " << _name << " forgot a weapon!!" << RESET << std::endl;
	else
		std::cout << BLUE << _name << " attacks with their " << _weapon->getType() << RESET << std::endl;
}