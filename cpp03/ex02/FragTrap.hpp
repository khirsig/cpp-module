/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:26:56 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 12:33:36 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(FragTrap &input);
		FragTrap(std::string name);
		~FragTrap();

		void	highFivesGuys();
};


#endif