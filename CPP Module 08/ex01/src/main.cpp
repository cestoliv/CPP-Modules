/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:36:30 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 11:33:47 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "Span.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "Test subject main, should output (2, 14): ";
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "(" << sp.shortestSpan() << ", " << sp.longestSpan() << ")" << std::endl;

	Span	empty = Span();

	std::cout << "Trying to add number to a 0 sized span : ";
	try
	{
		empty.addNumber(42);
		std::cout << "No problem ?" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Trying to find maximum of a 0 sized span : ";
	try
	{
		empty.longestSpan();
		std::cout << "No problem ?" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Trying to find minimum of a 0 sized span : ";
	try
	{
		empty.shortestSpan();
		std::cout << "No problem ?" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Testing deep copy : ";
	Span	l1 = Span(3);
	l1.addNumber(42);
	l1.addNumber(21);
	Span	l2 = l1;
	l2.addNumber(13);
	if (l1.shortestSpan() == l2.shortestSpan())
		std::cout << "Bad deep copy !" << std::endl;
	else
		std::cout << "OK" << std::endl;
	std::cout << std::endl;

	int		crazy_size = 1000000;
	Span	crazy_span = Span(crazy_size);
	std::cout << "Fill a " << crazy_size << " sized span with random values." << std::endl;
	srand(time(NULL));
	for (int cur = 0; cur < crazy_size; cur++)
		crazy_span.addNumber(rand());
	std::cout << "    ShortestSpan(): " << crazy_span.shortestSpan() << std::endl;
	std::cout << "    LongestSpan(): " << crazy_span.longestSpan() << std::endl;

	return 0;
}
