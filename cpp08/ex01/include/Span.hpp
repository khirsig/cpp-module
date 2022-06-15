/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:27:58 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/15 09:03:57 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <iostream>
# include <string>

class Span {
	public:
		Span();
		Span(const unsigned int N);
		Span(const Span &other);
		~Span();

		Span	&operator=(const Span &other);
		int		&operator[](const unsigned int N);

		void			addNumber(int nbr);
		unsigned int	longestSpan();
		unsigned int	shortestSpan();
	private:
		unsigned int 		_N;
		std::vector<int>	_content;

	class AlreadyStoredException : public std::exception {
		virtual const char *what() const throw();
	};

	class OutOfBoundsException : public std::exception {
		virtual const char *what() const throw();
	};
};

#endif