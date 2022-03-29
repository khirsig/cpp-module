/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:12:22 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 11:27:56 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

inline float sign(const Point point, const Point pt1, const Point pt2)
{
	return ((point.getX() - pt2.getX()) * (pt1.getY() - pt2.getY())
			- (pt1.getX() - pt2.getY()) * (point.getY() - pt2.getY()));
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{

}
