/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:51:43 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 13:58:23 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << " -> Create the Zombie Riri." << std::endl;
	Zombie riri = Zombie("Riri");
	riri.announce();

	std::cout << " -> Create the Zombie Fifi with newZombie()." << std::endl;
	Zombie*	fifi = newZombie("Fifi");
	fifi->announce();
	delete fifi;

	std::cout << " -> Create the Zombie Loulou with randomChump()." << std::endl;
	randomChump("Loulou");

	return 0;
}
