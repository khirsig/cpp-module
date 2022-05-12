/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:01:18 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 10:44:28 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal	&Animal::operator=(const Animal other)
{
	this->_type = other._type;

	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}
