/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:40:05 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 09:52:56 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
	std::cout << " -> Default Animal constructor called." << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << " -> Parametric Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << " -> Copy Animal constructor calld." << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << " -> Animal destructor called." << std::endl;
}

Animal	&Animal::operator =(const Animal &src)
{
	if (this != &src)
	{
		std::cout << " -> Copy assignement Animal called." << std::endl;
		this->_type = src._type;
	}
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "As an animal, I don't really have a sound..." << std::endl;
}

