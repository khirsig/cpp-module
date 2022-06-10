/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:52:27 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/10 11:39:41 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Caster.hpp"

Caster::Caster() { }

Caster::Caster(std::string input) : _input(input) { }

Caster::Caster(const Caster &other)
{
	*this = other;
}

Caster::~Caster() { }

Caster	&Caster::operator=(const Caster &other)
{
	this->_input = other._input;

	return (*this);
}

char	Caster::toChar() const
{
	if (this->_input.length() > 1)
		throw (Caster::ImpossibleException());
	int c = this->_input[0];
	if (!isprint(c))
		throw (Caster::NonDisplayableException());

	return (c);
}

int		Caster::toInt() const
{
	int i;
	std::istringstream(this->_input) >> i;

	return (i);
}

float	Caster::toFloat() const
{
	float f;
	std::istringstream(this->_input) >> f;

	return (f);
}

double	Caster::toDouble() const
{
	double d;
	std::istringstream(this->_input) >> d;

	return (d);
}

std::string	Caster::getInput() const
{
	return (this->_input);
}

std::ostream &operator<<(std::ostream &os, const Caster &output)
{
	try
	{
		char c = output.toChar();
		os << c;
	}
	catch (const std::exception& e)
	{
		os << e.what();
	}
	os << std::endl;
	os << output.toInt() << std::endl;
	os << output.toFloat() << std::endl;
	os << output.toDouble() << std::endl;
	return (os);
}

const char *Caster::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char *Caster::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}
