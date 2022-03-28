/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:05:37 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 13:52:24 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#define BLUE "\033[1;34m"
#define END "\033[0m"

#include "Weapon.hpp"
#include <iostream>

class HumanB {
	public:
		HumanB(std::string name) : _name(name) { _weapon = nullptr; }
		void		attack();
		void		setWeapon(Weapon &newWeapon);
	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif
