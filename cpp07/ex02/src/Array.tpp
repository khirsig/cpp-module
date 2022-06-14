/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:04:32 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 12:37:04 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename type>
Array<type>::Array()
{
	this->_content = NULL;
	this->_size = 0;
}

template <typename type>
Array<type>::Array(const unsigned int size)
{
	this->_content = new type[size]();
	this->_size = size;
}

template <typename type>
Array<type>::Array(const Array &other)
{
	*this = other;
}

template <typename type>
Array<type>::~Array()
{
	delete (this->_content);
}

template <typename type>
Array<type>	&Array<type>::operator=(const Array<type> &other)
{
	if (this->_size > 0)
		delete (this->_content);
	this->_size = other.size();
	if (this->_size > 0)
	{
		this->_content = new type[this->_size]();
		for (int i = 0; i < this->_size; ++i)
			this->_content[i] = other._content[i];
	}
	else
		this->_content = NULL;

	return (*this);
}

template <typename type>
type	&Array<type>::operator[](int i)
{
	if (this->_size <= 0 || i >= this->_size || i < 0)
		throw (Array<type>::NotAllocatedException());
	return (this->_content[i]);
}

template <typename type>
int		Array<type>::size() const
{
	return (this->_size);
}

template <typename type>
const char *Array<type>::NotAllocatedException::what() const throw()
{
	return ("Memory tried to use is out of bounds.");
}
