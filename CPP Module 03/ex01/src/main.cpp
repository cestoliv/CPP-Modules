/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:53:16 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 21:31:42 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	bob = ClapTrap("Bob");

	bob.attack("a worm");
	bob.takeDamage(9);

	ScavTrap	bib = ScavTrap("Bib");
	ScavTrap	bubs[2];

	bib.attack("a human");
	bib.guardGate();
	bib.guardGate();
	bib.beRepaired(5);
}
