/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:09:44 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 14:52:43 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class AMateria;

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &input);
		~Cure();

		Cure	&operator=(const Cure &input);

		AMateria	*clone() const;
		void		use(ICharacter &target);
};

#endif