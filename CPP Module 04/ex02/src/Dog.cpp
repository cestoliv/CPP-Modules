/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:57:12 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 18:18:09 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Dog.hpp"

Dog::Dog(void): AAnimal("Dog")
{
	std::cout << " -> Default Dog constructor called." << std::endl;
	this->_brain = new Brain();
}

//Dog::Dog(std::string type): _type(type)
//{
//	std::cout << " -> Parametric Dog constructor called." << std::endl;
//}

Dog::Dog(const Dog &src): AAnimal(src._type)
{
	std::cout << " -> Copy Dog constructor called." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << " -> Dog destructor called." << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator =(const Dog &src)
{
	if (this != &src)
	{
		std::cout << " -> Copy assignement Dog called." << std::endl;
		this->_type = src._type;
		this->_brain->setIdeas(src._brain->getIdeas()); // deep copy
		//this->_brain = src._brain; // shallow copy
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Imma bark... Woof Woof !" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return this->_brain;
}
