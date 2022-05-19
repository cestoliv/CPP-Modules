/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:19:41 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 12:03:49 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int main( void ) {
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	p1(0, 0);
	Point	p2(10.1, 0);
	Point	p3(0, 10);
	Point	p4(3, 3);
	Point	p5(5.5, 5.5);
	Point	p6(5, 5);

	std::cout << "point a = " << a << std::endl;
	std::cout << "point b = " << b << std::endl;
	std::cout << "point c = " << c << std::endl;

	std::cout << "point p1 = " << p1 << std::endl;
	std::cout << "p1 in triangle:\t\t" << bsp(a,b,c,p1) << std::endl;

	std::cout << "point p2 = " << p2 << std::endl;
	std::cout << "p2 in triangle:\t\t" << bsp(a,b,c,p2) << std::endl;

	std::cout << "point p3 = " << p3 << std::endl;
	std::cout << "p3 in triangle:\t\t" << bsp(a,b,c,p3) << std::endl;

	std::cout << "point p4 = " << p4 << std::endl;
	std::cout << "p4 in triangle:\t\t" << bsp(a,b,c,p4) << std::endl;

	std::cout << "point p5 = " << p5 << std::endl;
	std::cout << "p5 in triangle:\t\t" << bsp(a,b,c,p5) << std::endl;

	std::cout << "point p6 = " << p6 << std::endl;
	std::cout << "p6 in triangle:\t\t" << bsp(a,b,c,p6) << std::endl;

	return 0;
}
