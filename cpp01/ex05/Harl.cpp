/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:15:55 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/15 10:14:08 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

inline static int getLevel(std::string level)
{
	for(int i = 0; i < 3; ++i)
	{
		if (comparison[i] == level)
			return (i);
	}
	return (3);
}

void	Harl::complain(std::string level)
{
	void	(Harl::*getFunc[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int		idLevel = getLevel(level);

	(this->*getFunc[idLevel])();
}

void	Harl::_debug(void)
{
	std::cout << INV << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
			<< " I really do!" << END << std::endl;
}

void	Harl::_info(void)
{
	std::cout << INV <<  "I cannot believe adding extra bacon costs more money."
			<< " You didn’t put enough bacon in my burger! "
			<< "If you did, I wouldn’t be asking for more!" << END << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << INV << "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming for years whereas you started"
			<< " working here since last month." << END << std::endl;
}

void	Harl::_error(void)
{
	std::cout << INV << "This is unacceptable! "
			<< "I want to speak to the manager now." << END << std::endl;
}
