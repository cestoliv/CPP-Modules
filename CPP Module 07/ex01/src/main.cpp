/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/26 22:31:59 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>
#include "iter.hpp"

template<typename T>
void	echo(T &el)
{
	std::cout << ".-" << el << "-." << std::endl;
}

template<>
void	echo<std::string>(std::string &el)
{
	std::transform(el.begin(), el.end(), el.begin(), ::toupper);
	std::cout << ".." << el << ".." << std::endl;
}

int	main(void)
{
	int			int_arr[5] = {1, 2, 3, 4, 5};
	std::string	str_arr[3] = {"one", "two", "three"};

	iter<int>(int_arr, 5, echo);
	iter(str_arr, 3, echo);

	return 0;
}
