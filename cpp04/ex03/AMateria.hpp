/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:42:46 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/23 10:06:45 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria(const std::string &type);
		AMateria(const AMateria &input);
		virtual ~AMateria();

		AMateria &operator=(const AMateria &input);

		const std::string	&getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
	protected:
		AMateria();

		std::string	_type;
};


#endif