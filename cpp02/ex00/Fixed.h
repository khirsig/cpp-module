/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:13 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/22 09:36:27 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &input);
		~Fixed();
		Fixed &operator=(Fixed const &other);
		int		getRawBits();
		void	setRawBits(int const raw);
	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};


#endif
