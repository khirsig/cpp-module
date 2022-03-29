/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:12:22 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 12:19:35 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

inline static float sign(const Point point, const Point pt1, const Point pt2)
{
	return ((point.getX() - pt2.getX()) * (pt1.getY() - pt2.getY())
			- (pt1.getX() - pt2.getY()) * (point.getY() - pt2.getY()));
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float	d1, d2, d3;
	bool	hasNeg, hasPos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	hasNeg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	hasPos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return !(hasNeg && hasPos);
}
