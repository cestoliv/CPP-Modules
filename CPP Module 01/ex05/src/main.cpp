/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:51:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 17:27:03 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl harl = Harl();
	std::cout << "DEBUG : ";
	harl.complain("debug");
	std::cout << std::endl << "INFO : ";
	harl.complain("info");
	std::cout << std::endl << "WARNING : ";
	harl.complain("warning");
	std::cout << std::endl << "ERROR : ";
	harl.complain("error");
	return 0;
}
