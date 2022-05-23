/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:12:43 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/23 10:10:47 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }

Cure::Cure(const Cure &input) : AMateria(input) { }

Cure::~Cure() { }

Cure	&Cure::operator=(const Cure &input)
{
	this->_type = input._type;

	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << " heals " << target.getName() << "'s wounds *" << std::endl;
}
