/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:00:52 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 16:16:27 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(const Dog &other)
{
	this->_brain = new Brain();
	*this = other;
}

Dog::~Dog()
{
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	this->_type = other._type;
	*this->_brain = *other._brain;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
