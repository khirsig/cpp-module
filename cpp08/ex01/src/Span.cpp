/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:35:58 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/15 09:05:34 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span()
{
	this->_N = 0;
}

Span::Span(const unsigned int N)
{
	this->_N = N;
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span() { }

Span	&Span::operator=(const Span &other)
{
	this->_content = other._content;
	this->_N = other._N;

	return (*this);
}

int		&Span::operator[](const unsigned int N)
{
	if (N >= this->_N)
		throw (Span::OutOfBoundsException());
	return (this->_content[N]);
}

void	Span::addNumber(int nbr)
{
	std::vector<int>::iterator it;

	for (it = this->_content.begin(); it < this->_content.end(); ++it)
	{
		if (*it == nbr)
			throw (Span::AlreadyStoredException());
	}
	this->_content.push_back(nbr);
}

unsigned int	Span::longestSpan()
{
	std::vector<int>::iterator it;
	int	min = *this->_content.begin(), max = *this->_content.begin();

	for (it = this->_content.begin(); it < this->_content.end(); ++it)
	{
		if (*it > max)
			max = *it;
		if (*it < min)
			min = *it;
	}
	return (max - min);
}

unsigned int	Span::shortestSpan()
{
	return (0);
}

const char *Span::OutOfBoundsException::what() const throw()
{
	return ("Memory trying to access is out of bounds.");
}

const char *Span::AlreadyStoredException::what() const throw()
{
	return ("Number trying to add is already stored.");
}
