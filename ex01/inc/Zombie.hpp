/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 16:38:47 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMIBE_HPP
# define ZOMIBE_HPP

# include <cctype>
# include <iostream>

# define RESET       "\033[0m"
# define RED         "\033[31m"
# define YELLOW      "\033[33m"
# define BLUE        "\033[34m"
# define MAGENTA     "\033[35m"
# define CYAN        "\033[36m"
# define GREEN       "\033[32m"
# define GRAY        "\033[90m"
# define BOLD        "\033[1m"
# define UNDERLINE   "\033[4m"

class Zombie
{
private:
	std::string _name;
public:
	// Constuctor
	Zombie(void);
	// Deconstuctor
	~Zombie(void);
	void announce(void);
	void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMIBE_HPP
