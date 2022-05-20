/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:13:04 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/20 10:25:29 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << " -> Default Cat constructor called." << std::endl;
}

//Cat::Cat(std::string type): Animal(type)
//{
//	std::cout << " -> Parametric Cat constructor called." << std::endl;
//}

Cat::Cat(const Cat &src): Animal(src._type)
{
	std::cout << " -> Copy Cat constructor called." << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << " -> Cat destructor called." << std::endl;
}

Cat	&Cat::operator =(const Cat &src)
{
	if (this != &src)
	{
		std::cout << " -> Copy assignement Cat called." << std::endl;
		this->_type = src._type;
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Imma dominate the world, meow !" << std::endl;
}
