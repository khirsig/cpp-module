/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:08:13 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 09:37:48 by khirsig          ###   ########.fr       */
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
		Fixed	operator+=(const Fixed &other);
		Fixed	operator-=(const Fixed &other);
		Fixed	operator*=(const Fixed &other);
		Fixed	operator/=(const Fixed &other);

		bool	operator==(const Fixed &other);
		bool	operator!=(const Fixed &other);
		bool	operator<(const Fixed &other);
		bool	operator>(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator>=(const Fixed &other);

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;

		static Fixed		&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
	private:
		int					_fixedValue;
		static const int	_fractionalBits = 8;
};

Fixed	operator+(const Fixed &pre, const Fixed &post);
Fixed	operator-(const Fixed &pre, const Fixed &post);
Fixed	operator*(const Fixed &pre, const Fixed &post);
Fixed	operator/(const Fixed &pre, const Fixed &post);

std::ostream &operator<<(std::ostream &os, const Fixed &output);

#endif
