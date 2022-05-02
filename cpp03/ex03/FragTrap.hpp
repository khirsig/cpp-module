/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:26:56 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/02 11:16:57 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap(const FragTrap &input);
		FragTrap(const std::string name);
		~FragTrap();

		void	highFivesGuys();
};

#endif