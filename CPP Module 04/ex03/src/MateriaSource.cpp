/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:28:06 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:48:21 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < this->_inventory_size ; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < this->_inventory_size; i++)
		if(this->_inventory[i])
			delete this->_inventory[i];
}

MateriaSource	&MateriaSource::operator =(const MateriaSource &src)
{
	if(this != &src)
	{
		for (int i = 0; i < this->_inventory_size; i++)
		{
			if(this->_inventory[i])
				delete this->_inventory[i];
			if(src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}

	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for(int i = 0; i < this->_inventory_size; i++)
	{
		if(this->_inventory[i] == NULL)
		{
			std::cout << "MateriaSource learning " << materia->getType() << std::endl;
			this->_inventory[i] = materia;
			return ;
		}
	}

	std::cout << "Inventory is full, materia will be deleted." << std::endl;
	delete materia;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for(int i = 0; i < this->_inventory_size; i++)
		if(this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
			return this->_inventory[i]->clone();


	std::cout << "Material need to be learned first." << std::endl;
	return NULL;
}
