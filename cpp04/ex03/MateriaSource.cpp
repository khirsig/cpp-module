/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:38:01 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/23 13:11:46 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete this->_inventory[i];
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	for (int i = 0; i < 4; ++i)
	{
		this->_inventory[i] = other._inventory[i];
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (NULL);
}
