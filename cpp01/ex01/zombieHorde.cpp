/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:04:26 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 11:25:20 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *z = new Zombie[N];
	if (z == nullptr)
		return (nullptr);
	for (int i = 0; i < N; ++i)
		z[i].setName(name);
	return (z);
}
