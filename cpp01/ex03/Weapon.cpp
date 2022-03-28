/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:52:12 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 13:20:52 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() { };

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}

std::string const	&Weapon::getType()
{
	return(this->_type);
}
