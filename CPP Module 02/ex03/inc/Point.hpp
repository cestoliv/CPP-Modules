/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:26:11 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 11:50:08 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

# include <iostream>
# include "Fixed.hpp"

class Point {
private:
	const Fixed	_x;
	const Fixed _y;
public:
	Point(void);
	Point(const float x, const float y);
	Point(const Point &src);
	~Point(void);
	Point	&operator =(const Point &src);

	Fixed	x(void) const;
	Fixed	y(void) const;
};

std::ostream	&operator <<(std::ostream &o, Point const &p);

#endif
