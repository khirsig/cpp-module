/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:01:46 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/08 10:57:59 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	this->_name = "Bob";
}

Character::Character(const std::string &name)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	this->_name = name;
}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete this->_inventory[i];
}

Character	&Character::operator=(const Character &other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other._inventory[i] != NULL)
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_name = other.getName();
	return (*this);
}

const std::string	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int i = 0;

	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] != NULL && this->_inventory[i] == m)
		{
			std::cout << this->_name << " already has this " << m->getType() << " equipped in slot " << i << "." << std::endl;
			return ;
		}
	}
	while (i > 3 || this->_inventory[i] != NULL)
		++i;
	if (i >= 4)
	{
		std::cout << this->_name << "'s inventory is full." << std::endl;
		return ;
	}
	std::cout << this->_name << " equips " << m->getType() << " to slot " << i << "." << std::endl;
	this->_inventory[i] = m;
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx] == NULL)
		std::cout << this->_name << " has nothing equipped in slot " << idx << "." << std::endl;
	else
	{
		std::cout << this->_name << " unequips " << this->_inventory[idx]->getType() << " from slot " << idx << "." << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << this->_name << " has nothing equipped in slot " << idx << "." << std::endl;
		return ;
	}
	std::cout << "* " << this->_name;
	this->_inventory[idx]->use(target);
}
