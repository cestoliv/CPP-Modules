/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:36:30 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/28 10:07:21 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>

#include "easyfind.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::list<int>	l;

	l.push_back(42);
	l.push_back(21);
	l.push_back(1337);
	l.push_back(84);

	std::list<int>::iterator it = easyfind(l, 21);
	if (it == l.end())
		std::cout << "Can't find this element..." << std::endl;
	else
		std::cout << "Element " << *it << " found !" << std::endl;

	return 0;
}
