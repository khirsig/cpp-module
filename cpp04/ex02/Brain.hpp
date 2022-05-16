/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:20:05 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 11:11:30 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	public:
		Brain() { }
		Brain(const Brain &other);
		~Brain() { }

		Brain	&operator=(const Brain &other);

		void		setIdea(const std::string input, int index);
		std::string	getIdea(int index) const;
	private:
		std::string	ideas[100];
};

#endif