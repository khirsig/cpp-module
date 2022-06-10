/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:47:29 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/10 11:38:40 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <sstream>

class Caster {
	class ImpossibleException : public std::exception {
		virtual const char *what() const throw();
	};
	class NonDisplayableException : public std::exception {
		virtual const char *what() const throw();
	};

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

		std::string		getInput() const;
	private:
		std::string	_input;
};

std::ostream &operator<<(std::ostream &os, const Caster &output);


#endif