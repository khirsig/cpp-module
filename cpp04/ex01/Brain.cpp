/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:27:32 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 14:32:33 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (unsigned int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];

	return (*this);
}
