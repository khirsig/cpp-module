/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:03:36 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 11:19:39 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string s) : _name(s) { }
		~Zombie();
		void		setName(std::string name);
		void		announce(void);
	private:
		std::string	_name;
};

Zombie *zombieHorde(int n, std::string name);

#endif