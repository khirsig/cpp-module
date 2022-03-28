/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:03:13 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 12:16:00 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie;
	int		zombieAmount = 5;

	zombie = zombieHorde(zombieAmount, "Zombie");
	if (zombie == nullptr)
		return (1);
	for (int i = 0; i < zombieAmount; ++i)
		zombie[i].announce();
	delete[] zombie;
	return (0);
}
