/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:45:47 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 13:20:49 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string wt) : _type(wt) { }
		void				setType(std::string newType);
		std::string const	&getType();
	private:
		std::string			_type;
};

#endif
