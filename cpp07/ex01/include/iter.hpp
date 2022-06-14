/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:18:34 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 10:36:17 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>
# include <cctype>

template <typename type>
void	iter(type *arr, int size, void (*func)(type &))
{
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}

#endif