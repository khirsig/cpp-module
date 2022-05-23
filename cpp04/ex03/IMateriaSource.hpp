/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:31:36 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/23 12:43:30 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"


class IMateriaSource {
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;
	protected:
		AMateria	*_inventory[4];
};

#endif