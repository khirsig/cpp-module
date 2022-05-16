/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:01:46 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 15:20:50 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(const std::string &name)
{

}

Character::Character(const Character &other)
{

}

Character::~Character()
{

}

const std::string	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter &target)
{

}
