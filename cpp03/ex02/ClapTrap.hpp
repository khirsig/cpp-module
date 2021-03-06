/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:13:27 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 12:48:06 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define UL "\033[1;37m\033[4;37m"
# define END "\033[0m"

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &input);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &other);

		int			getDamage();
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
	protected:
		std::string		_name;
		int				_hitpoints;
		int				_energy;
		int				_damage;
		int				_maxHitpoints;
		int				_maxEnergy;
};

#endif