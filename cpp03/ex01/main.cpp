/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:12:11 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 11:38:51 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	alphaName = "Alpha", betaName = "Beta";
	ClapTrap	alpha(RED + alphaName + END);
	ScavTrap	beta(BLUE + betaName + END);

	alpha.attack(BLUE + betaName + END);
	beta.takeDamage(alpha.getDamage());
	alpha.beRepaired(alpha.getDamage());
	beta.attack(RED + alphaName + END);
	alpha.takeDamage(beta.getDamage());
	beta.beRepaired(beta.getDamage());
	beta.guardGate();
	return (0);
}
