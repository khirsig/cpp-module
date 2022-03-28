/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 09:41:55 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/10 14:55:05 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i)
	{
		std::string	input = argv[i];
		unsigned int len = input.length();
		for (unsigned int j = 0; j < len; ++j)
			input[j] = toupper(input[j]);
		std::cout << input;
	}
	std::cout << std::endl;
	return (0);
}
