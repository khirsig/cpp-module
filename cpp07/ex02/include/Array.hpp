/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:58:36 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 12:30:11 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename type> class Array {
	public:
		Array();
		Array(const unsigned int size);
		Array(const Array &other);
		~Array();

		Array	&operator=(const Array &other);
		type	&operator[](int i);

		int		size() const;
	private:
		type	*_content;
		int		_size;

	class NotAllocatedException : public std::exception {
		virtual const char *what() const throw();
	};
};

# include "../src/Array.tpp"

#endif