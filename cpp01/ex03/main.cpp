/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:44:46 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 13:47:30 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main()
{
	Weapon longsword("longsword");
	Weapon mace("mace");

	HumanA hannes("Hannes", mace);
	hannes.attack();
	mace.setType("rusty mace");
	hannes.attack();

	HumanB kevin("Kevin");
	kevin.attack();
	kevin.setWeapon(longsword);
	kevin.attack();
	longsword.setType("bloody longsword");
	kevin.attack();

	return (0);
}
