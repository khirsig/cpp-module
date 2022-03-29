/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:13 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 12:37:36 by khirsig          ###   ########.fr       */
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

		Fixed	&operator=(const Fixed &other);

		int		getRawBits();
		void	setRawBits(const int raw);
	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};


#endif
