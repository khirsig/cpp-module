/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:35:58 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/16 11:26:48 by khirsig          ###   ########.fr       */
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
	if (N >= this->_content.size())
		throw (Span::OutOfBoundsException());
	return (this->_content[N]);
}

void	Span::addNumber(int nbr)
{
	std::vector<int>::iterator it;

	for (it = this->_content.begin(); it < this->_content.end(); ++it)
	{
		if (this->_content.size() + 1 > this->_N)
			throw (Span::MaximumNumbersException());
		if (*it == nbr)
			throw (Span::AlreadyStoredException());
	}
	this->_content.push_back(nbr);
}

void	Span::addManyNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it;

	for (it = begin; it < end; ++it)
		addNumber(*it);
}

unsigned int	Span::longestSpan()
{
	if (this->_content.size() <= 1)
		throw (NotEnoughNumbersException());

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
	if (this->_content.size() <= 1)
		throw (NotEnoughNumbersException());

	std::vector<int>::iterator	it;
	std::vector<int>			vec;

	vec = this->_content;
	std::sort(vec.begin(), vec.end());
	std::reverse(vec.begin(), vec.end());

	int	min = *(vec.end() - 1), max = *vec.begin();

	for (it = vec.begin(); it < vec.end() - 1; ++it)
	{
		if (*it - *(it + 1) < max - min)
		{
			max = *it;
			min = *(it + 1);
		}
	}
	return (max - min);
}

const char *Span::OutOfBoundsException::what() const throw()
{
	return ("Memory trying to access is out of bounds.");
}

const char *Span::AlreadyStoredException::what() const throw()
{
	return ("Number trying to add is already stored.");
}

const char *Span::MaximumNumbersException::what() const throw()
{
	return ("Maximum amount of possible numbers already reached.");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers to check Span length.");
}