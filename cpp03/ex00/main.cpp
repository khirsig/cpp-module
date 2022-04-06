/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:12:11 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 10:28:55 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::string	alphaName = "Alpha", betaName = "Beta";
	ClapTrap	alpha(RED + alphaName + END), beta(BLUE + betaName + END);

	alpha.attack("Beta");
	beta.takeDamage(10);
	alpha.beRepaired(3);
	beta.attack("Alpha");
	return (0);
}
