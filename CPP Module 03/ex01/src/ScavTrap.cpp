/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:19:54 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 21:28:38 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default ScavTrap contructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guard_mode = false;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Parametric ScavTrap constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_guard_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor called for " << src.getName() << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called for " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator =(const ScavTrap &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignement ScavTrap operator called for " << src.getName() << std::endl;
		this->_name = src.getName();
		this->_hit_points = src.getHit_points();
		this->_energy_points = src.getEnergy_points();
		this->_attack_damage = src.getAttack_points();
		this->_guard_mode = src.getGuard_mode();
	}
	return *this;
}

bool	ScavTrap::getGuard_mode(void) const
{
	return this->_guard_mode;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guard_mode)
		std::cout << "ScavTrap " << this->_name << " was already in guard gate mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in guard gate mode." << std::endl;
	this->_guard_mode = true;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " doesn't have any hit points or energy points left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

