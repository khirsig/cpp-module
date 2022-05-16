/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:00:37 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 11:44:34 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	public:
		~Cat();
		Cat();
		Cat(const Cat &other);

		Cat	&operator=(const Cat &other);

		void		makeSound() const;
		void		setBrain(const std::string input, int index) const;
		std::string	getBrain(int index);
	private:
		Brain *_brain;
};

#endif