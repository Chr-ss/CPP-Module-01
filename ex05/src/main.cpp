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

#include "../inc/Harl.hpp"

int main()
{
	Harl newHarl;

	newHarl.complain("DEBUG");
	newHarl.complain("INFO");
	newHarl.complain("WARNING");
	newHarl.complain("ERROR");
	newHarl.complain("PARTY");
	newHarl.complain("");
	return (EXIT_SUCCESS);
}
