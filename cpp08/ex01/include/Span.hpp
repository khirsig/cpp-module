/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:27:58 by khirsig           #+#    #+#             */
/*   Updated: 2022/07/04 10:19:12 by khirsig          ###   ########.fr       */
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
		void			addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	longestSpan();
		unsigned int	shortestSpan();
	private:
		unsigned int 		_N;
		std::vector<int>	_content;

	class OutOfBoundsException : public std::exception {
		virtual const char *what() const throw();
	};
	class MaximumNumbersException : public std::exception {
		virtual const char *what() const throw();
	};
	class NotEnoughNumbersException : public std::exception {
		virtual const char *what() const throw();
	};
};

#endif