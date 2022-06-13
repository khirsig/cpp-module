/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:47:29 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 11:57:55 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <sstream>
# include <iomanip>
# include <limits>
# include <stdlib.h>

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

		std::string		getInput() const;
	private:
		std::string	_input;

	class ImpossibleException : public std::exception {
		virtual const char *what() const throw();
	};
	class NonDisplayableException : public std::exception {
		virtual const char *what() const throw();
	};
	class NanException : public std::exception {
		virtual const char *what() const throw();
	};
	class PosInfException : public std::exception {
		virtual const char *what() const throw();
	};
	class NegInfException : public std::exception {
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Caster &output);


#endif