/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/18 11:33:33 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	FragTrap	bob = FragTrap("Bob");

	bob.attack("a worm");
	bob.takeDamage(9);

	DiamondTrap	bib = DiamondTrap("Bib");
	//DiamondTrap	bubs[2];
	//DiamondTrap	bab = bib;

	bib.whoAmI();
	bib.attack("a human");
	bib.highFivesGuys();
	bib.beRepaired(5);
}
