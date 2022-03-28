/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:45:18 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/11 10:58:23 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		phoneBook;
	std::string		input;
	unsigned int	entryNbr;

	entryNbr = 0;
	do
	{
		std::cout << "Phonebook ✗ ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		if (input == "ADD")
		{
			phoneBook.setContact(entryNbr);
			entryNbr++;
			if (entryNbr == 8)
				entryNbr = 0;
		}
		if (input == "SEARCH")
			phoneBook.getContactList();
	} while (input != "EXIT");
	return (0);
}
