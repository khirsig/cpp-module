/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:42:39 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 14:54:46 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() { }

AMateria::AMateria(const std::string &type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &input)
{
	*this = input;
}

AMateria::~AMateria() { }

AMateria &AMateria::operator=(const AMateria &input)
{
	this->_type = input._type;

	return (*this);
}

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

void		AMateria::use(ICharacter &target)
{
	(void)target;
}
