/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2024/11/07 16:38:47 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

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

class Weapon
{
	private:
		std::string	_type;
	public:
	// Constructor
		Weapon(const std::string &type);
	// Deconstructors
		~Weapon();
	// Getter
		std::string getType() const;
	// Setter
		void setType(const std::string &type);
};

#endif // WEAPON_HPP
