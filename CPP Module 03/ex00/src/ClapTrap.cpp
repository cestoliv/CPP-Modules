/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:11:46 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 21:29:48 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "Unnamed";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
	std::cout << "Parametric constructor called for " << this->_name << std::endl;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called for " << src.getName() << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called for " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator =(const ClapTrap &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignement operator called for " << src.getName() << std::endl;
		this->_name = src.getName();
		this->_hit_points = src.getHit_points();
		this->_energy_points = src.getEnergy_points();
		this->_attack_damage = src.getAttack_points();
	}
	return *this;
}

std::string	ClapTrap::getName(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::getHit_points(void) const
{
	return this->_hit_points;
}

unsigned int	ClapTrap::getEnergy_points(void) const
{
	return this->_energy_points;
}

unsigned int	ClapTrap::getAttack_points(void) const
{
	return this->_attack_damage;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have any hit points or energy points left." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have any hit points left." << std::endl;
		return;
	}
	if (this->_hit_points > amount)
		this->_hit_points -= amount;
	else
		this->_hit_points = 0;
	std::cout << "ClapTrap " << this->_name << " took " << amount << " damage, now have " << this->_hit_points << " hit points left..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have any hit points or energy points left." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " won " << amount << " hit point(s), now have " << this->_hit_points + amount << "!" << std::endl;
	this->_hit_points += amount;
	this->_energy_points--;
}
