/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:00:52 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 11:21:51 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain();
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;

}

Cat::Cat(const Cat &other)
{
	this->_brain = new Brain();
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	this->_type = other._type;
	*this->_brain = *other._brain;
	std::cout << "Cat assignement operator called" << std::endl;

	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::setBrain(const std::string input, int index) const
{
	this->_brain->setIdea(input, index);
}

std::string	Cat::getBrain(int index)
{
	return (this->_brain->getIdea(index));
}
