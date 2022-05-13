/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:01:02 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 14:29:06 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	public:
		Animal() { }
		Animal(const Animal &other);
		~Animal() { }

		Animal	&operator=(const Animal &other);

		virtual void	makeSound() const;
		std::string		getType() const { return this->_type; }
	protected:
		std::string		_type;
};

#endif