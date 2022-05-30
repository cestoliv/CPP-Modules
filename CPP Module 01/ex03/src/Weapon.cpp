/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:45 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/30 15:48:32 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: _type(type)
{}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->_type << " destroyed" << std::endl;
	return;
}

const std::string	&Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}
