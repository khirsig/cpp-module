/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:13 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/22 13:18:23 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <math.h>


class Fixed {
	public:
		Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(Fixed const &input);
		~Fixed();

		Fixed	&operator=(Fixed const &other);
		int		getRawBits();
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &output);

#endif
