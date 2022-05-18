/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 21:49:12 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/17 22:08:54 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Parametric FragTrap constructor called for " << this->_name << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src)
{
	std::cout << "Copy FragTrap constructor called for " << src.getName() << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called for " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator =(const FragTrap &src)
{
	if (this != &src)
	{
		std::cout << "Copy assignement FragTrap operator called for " << src.getName() << std::endl;
		this->_name = src.getName();
		this->_hit_points = src.getHit_points();
		this->_energy_points = src.getEnergy_points();
		this->_attack_damage = src.getAttack_points();
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": High fives ?" << std::endl;
}
