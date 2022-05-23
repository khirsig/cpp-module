/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:09:44 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/23 11:37:19 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class AMateria;

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &input);
		~Ice();

		Ice		&operator=(const Ice &input);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif