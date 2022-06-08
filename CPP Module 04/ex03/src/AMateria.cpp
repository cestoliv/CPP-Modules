/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:13:28 by ocartier          #+#    #+#             */
/*   Updated: 2022/06/08 18:45:49 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
	: _type("untyped")
{}

AMateria::AMateria(const std::string &type)
	: _type(type)
{}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria()
{}

AMateria	&AMateria::operator =(const AMateria &src)
{
	if(this != &src)
	{
		this->_type = src._type;
	}
	return *this;
}

std::string const	&AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "Hey ! I'm virtual and you should replace me!" << std::endl;
}
