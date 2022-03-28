/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:17:43 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 12:39:45 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define UL "\033[1;37m\033[4;37m"
#define END "\033[0m"

int	main()
{
	std::string		stringVAL = "HI THIS IS BRAIN";
	std::string		*stringPTR = &stringVAL;
	std::string		&stringREF = stringVAL;

	std::cout << UL << "Memory Address" << END << std::endl
			<< RED << "stringVAL: " << END << &stringVAL << std::endl
			<< GREEN << "stringPTR: " << END << stringPTR << std::endl
			<< BLUE << "stringREF: " << END << &stringREF << std::endl;
	std::cout << UL << "Value" << END << std::endl
			<< RED << "stringVAL: " << END << stringVAL << std::endl
			<< GREEN << "stringPTR: " << END << *stringPTR << std::endl
			<< BLUE << "stringREF: " << END << stringREF << std::endl;
	return (0);
}
