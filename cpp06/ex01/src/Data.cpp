/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:46:01 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 14:55:30 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"

Data::Data() : _content() { }

Data::Data(const std::string content) : _content(content) { }

Data::Data(const Data &other)
{
	*this = other;
}

Data::~Data() { }

Data	&Data::operator=(const Data &other)
{
	this->_content = other._content;

	return (*this);
}

std::string	Data::getContent() const
{
	return (this->_content);
}
