/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:20:05 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 15:54:52 by khirsig          ###   ########.fr       */
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

		std::string	ideas[100];
};

#endif