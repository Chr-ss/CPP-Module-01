/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:50 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 23:59:35 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void)
{
	std::cout << MAGENTA << "[DEBUG]\n" << RESET;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << BLUE << "[INFO]\n" << RESET;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW << "[WARNING]\n" << RESET;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << "[ERROR]\n" << RESET;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*actions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int paraLevel = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			paraLevel = i;
			break ;
		}
	}
	switch (paraLevel)
	{
		case 0:
			(this->*actions[0])();
			[[fallthrough]];
		case 1:
			(this->*actions[1])();
			[[fallthrough]];
		case 2:
			(this->*actions[2])();
			[[fallthrough]];
		case 3:
			(this->*actions[3])();
			break ;
		default:
			std::cout << GRAY << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	}
}
