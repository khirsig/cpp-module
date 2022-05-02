/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:01:59 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/02 11:17:04 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &input);
		ScavTrap(const std::string name);
		~ScavTrap();

		void	guardGate();
};

#endif