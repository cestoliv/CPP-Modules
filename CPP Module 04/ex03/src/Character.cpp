/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:18:58 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/13 20:11:51 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
	: _name("unnamed")
{
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string &name)
	: _name(name)
{
	for (int i = 0; i < this->_inventorySize; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < this->_inventorySize; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character	&Character::operator =(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < this->_inventorySize; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

const std::string	&Character::getName(void) const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < this->_inventorySize; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equips " << m->getType() << " in " << i << std::endl;
			return;
		}
	}
	std::cout << this->_name << " can not equip " << m->getType() << " , because inventory is full" << std::endl;
	delete m;
}

void	Character::unequip(int p_idx)
{
	if (p_idx >= 0 && p_idx < this->_inventorySize)
	{
		std::cout << this->_name << " unequips " << this->_inventory[p_idx]->getType() << " (" << p_idx << ")" << std::endl;
		this->_inventory[p_idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_inventorySize && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << this->_name << " doesn't do anything" << std::endl;
}
