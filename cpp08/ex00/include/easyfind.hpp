/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:06:29 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 21:27:07 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>
# include <vector>
# include <iostream>
# include <string>

class NotFoundException : public std::exception {
		virtual const char *what() const throw()
		{
			return ("Needle not found.");
		}
	};

template <typename type>
typename type::iterator	easyfind(type &haystack, int needle)
{
	typename type::iterator it = std::find(haystack.begin(), haystack.end(), needle);

	if (it == haystack.cend())
		throw (NotFoundException());
	return (it);
}

#endif