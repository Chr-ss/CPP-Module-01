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

#include "../inc/replace.hpp"

std::string strReplace(std::string buffer, const std::string find, const std::string replace)
{
	size_t find_len = find.length();
	size_t replace_len = replace.length();
	size_t pos = 0;

	pos = buffer.find(find);
	while (pos != std::string::npos)
	{
		buffer.erase(pos, find_len);
		buffer.insert(pos, replace);
		pos = buffer.find(find, pos + replace_len);
	}
	return (buffer);
}

int	openFiles(const std::string filename, std::ifstream &infile, std::ofstream &outfile)
{
	infile.open(filename);
	if (infile.is_open() == false)
	{
		std::cout << RED << "Unable to open infline!!" << std::endl;
		return (EXIT_FAILURE);
	}
	outfile.open(filename + ".replace", std::ofstream::out | std::ofstream::trunc);
	if (outfile.is_open() == false)
	{
		std::cout << RED << "Unable to open outfile!!" << std::endl;
		infile.close();
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << BLUE << "Usage: ./replace <Filename to read from> <word to find> <word to replace>" << RESET << std::endl;
		return (EXIT_FAILURE);
	}
	const std::string	filename = argv[1];
	const std::string	find = argv[2];
	const std::string	replace = argv[3];
	std::ifstream		infile;
	std::ofstream		outfile;
	std::string			buffer;

	if (openFiles(filename, infile, outfile))
		return (EXIT_FAILURE);
	while (std::getline(infile, buffer))
	{
		buffer = strReplace(buffer, find, replace);
		outfile << buffer;
		if (infile.peek() != EOF)
			outfile << std::endl;
	}
	outfile.close();
	infile.close();
	return (EXIT_SUCCESS);
}