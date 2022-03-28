/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 09:42:02 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/11 10:54:38 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::setContact(int id)
{
	this->contact[id].setContact();
}

void	PhoneBook::getContactList()
{
	for (unsigned int id = 0; id < 8; ++id)
	{
		if (this->contact[id].getListEntry(id) == 0 && id == 0)
		{
			std::cout << "There is nothing here." << std::endl;
			return ;
		}
	}
	while (42)
	{
		std::cout << "Enter Contact ID ✗ ";
		std::string	input;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		if (input.size() == 1 && isdigit(input[0]))
		{
			int	id = stoi(input) - 1;
			if(id >= 0 && id < 8)
			{
				if (this->contact[id].getSearchEntry() == 1)
					break ;
			}
		}
	}
}
