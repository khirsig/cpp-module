/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:25 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/22 11:07:38 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
	this->_fixedValue = 0;
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called." << std::endl;
	this->_fixedValue = input << this->_fractionalBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called." << std::endl;
	this->_fixedValue = roundf(input * (1 << this->_fractionalBits));
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

int		Fixed::toInt() const
{
	return (this->_fixedValue >> this->_fractionalBits);
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixedValue / (1 << this->_fractionalBits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &output)
{
	os << output.toFloat();
	return (os);
}
