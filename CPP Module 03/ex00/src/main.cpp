/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 15:10:17 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob = ClapTrap("Bob");

	//ClapTrap	bib = bob;
	//ClapTrap	bubs[3];

	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");
	bob.attack("a worm");

	bob.takeDamage(9);
	bob.attack("a worm");
	bob.takeDamage(1);
	bob.attack("a worm"); // No more life
	bob.attack("a worm"); // If have one more life, will not have enought energy
}
