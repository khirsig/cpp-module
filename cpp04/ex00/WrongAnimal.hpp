/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:01:02 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 11:22:31 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal() { }
		~WrongAnimal() { }

		WrongAnimal	&operator=(const WrongAnimal other);

		void			makeSound() const;
		std::string		getType() const { return this->_type; }
	protected:
		std::string		_type;
};

#endif