/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 08:43:20 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/15 10:46:38 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;
	std::string	input;

	std::cout << "Input: ";
	getline(std::cin, input);
	harl.complain(input);
	return (0);
}
