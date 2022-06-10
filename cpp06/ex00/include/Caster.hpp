/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:47:29 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/10 11:11:15 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <sstream>

class Caster {
	public:
		Caster();
		Caster(std::string input);
		Caster(const Caster &other);
		~Caster();

		Caster	&operator=(const Caster &other);

		char	toChar() const;
		int		toInt() const;
		float	toFloat() const;
		double	toDouble() const;
	private:
		std::string	_input;
};

#endif