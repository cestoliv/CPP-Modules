/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:53:11 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/09 15:04:36 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: name(name)
{}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return;
}
