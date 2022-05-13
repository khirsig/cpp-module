/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:00:52 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 16:17:27 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(const Cat &other)
{
	this->_brain = new Brain();
	*this = other;
}

Cat::~Cat()
{
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	*this->_brain = *other._brain;

	return (*this);
}


void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
