/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:25 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/22 09:36:32 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
	this->_fixedValue = 0;
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(Fixed const &input)
{
	this->_fixedValue = input._fixedValue;
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	this->_fixedValue = other._fixedValue;
	std::cout << "Copy assignment operator called." << std::endl;
	return (*this);
}

int	Fixed::getRawBits()
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_fixedValue = raw;
}
