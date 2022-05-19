/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:42:10 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/19 09:40:53 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name): _name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " destroyed" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return;
}
