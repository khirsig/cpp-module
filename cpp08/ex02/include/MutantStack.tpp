/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:30:33 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/16 12:55:27 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename type>
MutantStack<type>::MutantStack() : std::stack<type>()
{

}

template <typename type>
MutantStack<type>::MutantStack(const MutantStack<type> &other)
{
	*this = other;
}

template <typename type>
MutantStack<type>::~MutantStack() { }

template <typename type>
MutantStack<type>	&MutantStack<type>::operator=(const MutantStack<type> &other)
{
	this->c = other.c;

	return (*this);
}

template <typename type>
typename MutantStack<type>::iterator	MutantStack<type>::begin()
{
	return (this->c.begin());
}

template <typename type>
typename MutantStack<type>::iterator	MutantStack<type>::end()
{
	return (this->c.end());
}
