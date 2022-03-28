/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 08:43:20 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/15 10:17:51 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong amount of arguments" << std::endl;
		return (1);
	}
	Harl harl;
	std::string	input = argv[1];

	harl.complain(input);
	return (0);
}
