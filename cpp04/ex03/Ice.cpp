/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:12:43 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/23 10:10:47 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }

Ice::Ice(const Ice &input) : AMateria(input) { }

Ice::~Ice() { }

Ice	&Ice::operator=(const Ice &input)
{
	this->_type = input._type;

	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << " shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
