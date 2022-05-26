/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/26 16:31:16 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Multi.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Usage: ./convert <num1> [<num2> <...> <numN...>]" << std::endl;
	for (int cur = 1; cur < argc; cur++)
	{
		Multi	mul = Multi(argv[cur]);
		std::cout << mul << std::endl;
		if (argc > 2 && cur < argc - 1)
			std::cout << "-----------" << std::endl;
	}
	return 0;
}
