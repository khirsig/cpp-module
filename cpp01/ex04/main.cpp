/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:34:17 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 15:39:00 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

static void	replaceString(std::string &input, std::string s1, std::string s2, size_t pos)
{
	input.erase(pos, s1.size());
	input.insert(pos, s2);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Error: 4 arguments needed." << std::endl;

	std::string s1 = argv[2], s2 = argv[3];
	std::ifstream inputStream(argv[1]);
	std::stringstream buffer;

	if (inputStream.fail())
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return (errno);
	}
	buffer << inputStream.rdbuf();
	inputStream.close();
	std::string inputString = buffer.str();
	while(42)
	{
		size_t	pos = inputString.find(s1);
		if (pos == inputString.npos)
			break ;
		else
			replaceString(inputString, s1, s2, pos);
	}

	std::ofstream outputStream("output.txt");
	if (outputStream.fail())
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return (errno);
	}
	outputStream << inputString;
	outputStream.close();
	return (0);
}
