/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:00:57 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 13:50:13 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	if (this->_weapon == nullptr)
		std::cout << RED << this->_name << END
				<< " has no weapon and can not attack." << std::endl;
	else
	{
		std::cout << RED << this->_name << END
				<< " attacks with their " << this->_weapon->getType()
				<< "." << std::endl;
	}
}

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}
