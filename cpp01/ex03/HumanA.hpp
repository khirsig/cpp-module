/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:45:23 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 13:51:58 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#define RED "\033[1;31m"
#define END "\033[0m"

#include "Weapon.hpp"
#include <iostream>


class HumanA {
	public:
		HumanA(std::string nm, Weapon &wep) : _name(nm), _weapon(&wep) { }
		void		attack();
		void		setWeapon(Weapon &newWeapon);
	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif
