/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:25 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 12:27:37 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

Fixed::Fixed()
{
	this->_fixedValue = 0;
}

Fixed::Fixed(const int input)
{
	this->_fixedValue = input << this->_fractionalBits;
}

Fixed::Fixed(const float input)
{
	this->_fixedValue = roundf(input * (1 << this->_fractionalBits));
}

Fixed::Fixed(Fixed const &input)
{
	this->_fixedValue = input._fixedValue;
}

Fixed::~Fixed()
{
}

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

Fixed &Fixed::operator=(Fixed const &other)
{
	this->_fixedValue = other._fixedValue;
	return (*this);
}

/* ************************************************************************** */
/*   Comparison Operators                                                     */
/* ************************************************************************** */

bool	Fixed::operator==(const Fixed &other)
{
	return (this->_fixedValue == other._fixedValue);
}

bool	Fixed::operator!=(const Fixed &other)
{
	return !(*this == other);
}

bool	Fixed::operator>(const Fixed &other)
{
	return (this->_fixedValue > other._fixedValue);
}

bool	Fixed::operator<(const Fixed &other)
{
	return (this->_fixedValue < other._fixedValue);
}

bool	Fixed::operator>=(const Fixed &other)
{
	return (this->_fixedValue >= other._fixedValue);
}

bool	Fixed::operator<=(const Fixed &other)
{
	return (this->_fixedValue <= other._fixedValue);
}

/* ************************************************************************** */
/*   Compound Operators                                                       */
/* ************************************************************************** */

Fixed	Fixed::operator+=(const Fixed &other)
{
	this->_fixedValue += other._fixedValue;
	return (*this);
}

Fixed	Fixed::operator-=(const Fixed &other)
{
	this->_fixedValue -= other._fixedValue;
	return (*this);
}

Fixed	Fixed::operator*=(const Fixed &other)
{
	this->_fixedValue *= other._fixedValue / (1 << Fixed::_fractionalBits);
	return (*this);
}

Fixed	Fixed::operator/=(const Fixed &other)
{
	this->_fixedValue = this->_fixedValue * (1 << Fixed::_fractionalBits) / other._fixedValue;
	return (*this);
}

/* ************************************************************************** */
/*   Arithmetic Operators                                                     */
/* ************************************************************************** */

Fixed	operator+(const Fixed &pre, const Fixed &post)
{
	Fixed result = pre;

	result += post;
	return (result);
}

Fixed	operator-(const Fixed &pre, const Fixed &post)
{
	Fixed result = pre;

	result -= post;
	return (result);
}

Fixed	operator*(const Fixed &pre, const Fixed &post)
{
	Fixed result = pre;

	result *= post;
	return (result);
}

Fixed	operator/(const Fixed &pre, const Fixed &post)
{
	Fixed result = pre;

	result /= post;
	return (result);
}

/* ************************************************************************** */
/*   Increment & Decrement Operators                                          */
/* ************************************************************************** */

Fixed	&Fixed::operator++()
{
	this->_fixedValue++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->_fixedValue--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed ret = *this;

	++*this;
	return (ret);
}

Fixed	Fixed::operator--(int)
{
	Fixed ret = *this;

	--*this;
	return (ret);
}

/* ************************************************************************** */
/*   Ostream Operator                                                         */
/* ************************************************************************** */

std::ostream &operator<<(std::ostream &os, const Fixed &output)
{
	os << output.toFloat();
	return (os);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

int	Fixed::getRawBits() const
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}
