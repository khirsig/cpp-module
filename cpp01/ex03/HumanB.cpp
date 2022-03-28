/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:05:29 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 14:32:57 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->_weapon == nullptr)
		std::cout << BLUE << this->_name << END
				<<" has no weapon and can not attack." << std::endl;
	else
	{
		std::cout << BLUE << this->_name << END
				<< " attacks with their " << this->_weapon->getType()
				<< "." << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}
