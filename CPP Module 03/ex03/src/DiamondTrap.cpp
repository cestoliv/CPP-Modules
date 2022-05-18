/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:06:41 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/18 11:30:51 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "Unnamed";
	this->_hit_points = this->FragTrap::_hit_points;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = this->FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Parametric DiamondTrap constructor called for " << name << std::endl;
	this->_name = name;
	this->_hit_points = this->FragTrap::_hit_points;
	this->_energy_points = this->ScavTrap::_energy_points;
	this->_attack_damage = this->FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src._name + "_clap_name"), ScavTrap(src._name + "_clap_name"), FragTrap(src._name + "_clap_name") 
{
	std::cout << "Copy DiamondTrap constructor called for " << src.getName() << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called for " << this->_name << std::endl;
}

DiamondTrap	&DiamondTrap::operator =(const DiamondTrap &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignement DiamondTrap operator called for " << src.getName() << std::endl;
		this->_name = src.getName();
		this->_hit_points = src.getHit_points();
		this->_energy_points = src.getEnergy_points();
		this->_attack_damage = src.getAttack_points();
		this->_guard_mode = src.getGuard_mode();
	}
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my Clap name is " << this->ClapTrap::_name << std::endl;
}
