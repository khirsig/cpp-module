/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:23 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/14 11:03:56 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(std::string s) : _name(s) { }
		~Zombie();
		void		announce(void);
	private:
		std::string	_name;
};

void	randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif