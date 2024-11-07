/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:50 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 16:36:52 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {}

Weapon::~Weapon(void)
{
	std::cout << RED << getType() << " dropped and broke." << RESET << std::endl;
}

std::string Weapon::getType() const
{
	return (_type);
}

void Weapon::setType(const std::string &type)
{
	_type = type;
}
