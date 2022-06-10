/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:52:27 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/10 11:10:26 by khirsig          ###   ########.fr       */
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
		throw ("impossible");
	char c = this->_input[0];

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
