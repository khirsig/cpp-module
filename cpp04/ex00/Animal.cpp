/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:01:18 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 14:29:04 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal	&Animal::operator=(const Animal &other)
{
	this->_type = other._type;

	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "I'm an animal" << std::endl;
}
