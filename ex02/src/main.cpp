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

#include <cctype>
#include <iostream>

int main(void)
{
	std::string stringVariable = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVariable;
	std::string &stringREF = stringVariable;

	std::cout << "The memory address of the string variable:\t" << &stringVariable << "\n";
	std::cout << "The memory address held by stringPTR:\t\t" << stringPTR << "\n";
	std::cout << "The memory address held by stringREF:\t\t" << &stringREF << "\n\n";

	std::cout << "The value of the string variable:\t" << stringVariable << "\n";
	std::cout << "The value pointed to by stringPTR:\t" << *stringPTR << "\n";
	std::cout << "The value pointed to by stringREF:\t" << stringREF << std::endl;
	return (EXIT_SUCCESS);
}