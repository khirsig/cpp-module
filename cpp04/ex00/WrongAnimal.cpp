/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:01:18 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 11:00:29 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal	&WrongAnimal::operator=(const WrongAnimal other)
{
	this->_type = other._type;

	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "I'm a wrong animal" << std::endl;
}
