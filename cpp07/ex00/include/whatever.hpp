/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:13:53 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 10:17:21 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename type>
void swap(type &v1, type &v2)
{
	type temp = v2;
	v2 = v1;
	v1 = temp;
}

template <typename type>
type min(const type &v1, const type &v2)
{
	if (v1 > v2)
		return (v2);
	if (v2 > v1)
		return (v1);
	return (v2);
}

template <typename type>
type max(const type &v1, const type &v2)
{
	if (v1 > v2)
		return (v1);
	if (v2 > v1)
		return (v2);
	return (v2);
}

#endif