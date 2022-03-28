/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:57:57 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/11 10:57:15 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setContact()
{
	unsigned int i = 0;

	while (i < 5)
	{
		std::cout << prefix[i];
		std::getline(std::cin, this->info[i]);
		if (std::cin.eof())
			exit(EXIT_SUCCESS);
		if (!(this->info[i].empty()))
			i++;
	}
}

int Contact::getListEntry(int id)
{
	for (unsigned int i = 0; i < 5; ++i)
	{
		if (this->info[i].empty())
			return (0);
	}
	std::string tempName = this->info[0];
	if (tempName.size() > 10)
	{
		tempName.resize(9);
		tempName += ".";
	}
	std::cout << std::setw(10) << id + 1 << "|"
			<< std::setw(10) << tempName << "|";
	tempName = this->info[1];
	if (tempName.size() > 10)
	{
		tempName.resize(9);
		tempName += ".";
	}
	std::cout << std::setw(10) << tempName << "|";
	tempName = this->info[2];
	if (tempName.size() > 10)
	{
		tempName.resize(9);
		tempName += ".";
	}
	std::cout << std::setw(10) << tempName << std::endl;
	return (1);
}

int Contact::getSearchEntry()
{
	for (unsigned int i = 0; i < 5; ++i)
	{
		if (this->info[i].empty())
			return (0);
		std::cout << prefix[i] << this->info[i] << std::endl;
	}
	return (1);
}
