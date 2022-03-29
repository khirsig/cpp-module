/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:14:42 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 11:21:57 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.h"

class Point {
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &input);
		~Point();

		float	getX() const;
		float	getY() const;

		Point	&operator=(const Point &other);
	private:
		Fixed	_x;
		Fixed	_y;
};

#endif